#include "sample.h"

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
