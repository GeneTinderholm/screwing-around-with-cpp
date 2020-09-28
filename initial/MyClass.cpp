#include "MyClass.h"

// initialization list
MyClass::MyClass(int y) : x(y) {}

int MyClass::get_four() {
    return 4;
}

int MyClass::get_x() {
    return x;
}

int things(int x) {
    return x + 5;
};
