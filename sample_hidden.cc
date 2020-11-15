class MyClass {
 public:
  MyClass();
  ~MyClass();

  void PublicMethod();
  int PublicMethodWithArgs(int argc, char* argv[]);

 private:
  void PrivateMethod();
  int PrivateMethodWithArgs(int argc, char* argv[]);
};

__attribute__((__visibility__("default")))
MyClass::MyClass() {}

__attribute__((__visibility__("default")))
MyClass::~MyClass() {}

void __attribute__((__visibility__("default")))
MyClass::PublicMethod() {}

int __attribute__((__visibility__("default")))
MyClass::PublicMethodWithArgs(int argc, char* argv[]) {}

void
MyClass::PrivateMethod() {}

int
MyClass::PrivateMethodWithArgs(int argc, char* argv[]) {}
