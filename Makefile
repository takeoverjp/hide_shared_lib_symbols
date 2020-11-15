.PHONY: all clean eported
all: exported exported_version_script exported_default exported_hidden
clean:
	rm -f *.so

libsample.so: sample.cc
	g++ -W -Werror -shared -fPIC -o $@ $^

libsample_version_script.so: sample_version_script.cc sample.map
	g++ -W -Werror -shared -fPIC -Wl,--version-script=sample.map -o $@ $<

libsample_default.so: sample_default.cc
	g++ -W -Werror -shared -fPIC -o $@ $^

libsample_hidden.so: sample_hidden.cc
	g++ -W -Werror -shared -fPIC -fvisibility=hidden -o $@ $^

exported: libsample.so
	nm -gC $^ | awk '$$2=="T"' | grep MyClass

exported_version_script: libsample_version_script.so
	nm -gC $^ | awk '$$2=="T"' | grep MyClass

exported_default: libsample_default.so
	nm -gC $^ | awk '$$2=="T"' | grep MyClass

exported_hidden: libsample_hidden.so
	nm -gC $^ | awk '$$2=="T"' | grep MyClass
