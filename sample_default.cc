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

MyClass::MyClass() {}

MyClass::~MyClass() {}

void MyClass::PublicMethod() {}

int MyClass::PublicMethodWithArgs(int argc, char* argv[]) {}

void __attribute__((__visibility__("hidden")))
MyClass::PrivateMethod() {
}

int __attribute__((__visibility__("hidden")))
MyClass::PrivateMethodWithArgs(int argc, char* argv[]) {
}
