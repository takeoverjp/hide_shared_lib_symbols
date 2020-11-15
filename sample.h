#ifndef SAMPLE_H_
#define SAMPLE_H_

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

#endif  // SAMPLE_H_
