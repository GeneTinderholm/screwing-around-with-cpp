#include <iostream>
#include "MyClass.h"
#include "ClassTwo.hpp"
#include "StringFuckery.h"

using namespace std;

int main(int argc, char *argv[]) {
    MyClass mc(9);

    cout << argv[argc - 1] << '\n';
    cout << mc.get_four() << '\n' << mc.get_x() << '\n';
    cout << "Hello World!\n";
    cout << things(5) << '\n';
    ClassTwo ct;
    ClassTwo ctw(5);
    ClassTwo ctwo(5, 5);

    cout << "ct  : x: " << ct.getX() << " y: " << ct.getY() << '\n';
    cout << "ctw : x: " << ctw.getX() << " y: " << ctw.getY() << '\n';
    cout << "ctwo: x: " << ctwo.getX() << " y: " << ctwo.getY() << '\n';
    ClassTwo* classTwo = factory(1, 50);

    cout << "factory res: " << classTwo->getX() + classTwo->getY() << '\n';

    StringFuckery sf("some stuffs");
    sf.print();

    return 0;
}
