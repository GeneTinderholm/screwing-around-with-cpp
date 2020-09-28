#include "ClassTwo.hpp"

ClassTwo::ClassTwo(): x(1), y(2) {};
ClassTwo::ClassTwo(int x): x(x), y(2) {};
ClassTwo::ClassTwo(int x, int y): x(x), y(y) {};
int ClassTwo::getX() {
    return x;
}
int ClassTwo::getY() {
    return y;
}

ClassTwo* factory(int x, int y) {
    return new ClassTwo(x, y);
}
