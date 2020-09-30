#include <iostream>
#include <string>
#include "../Stack.hpp"

using std::cout;
using std::string;

int main () {
    Stack<string> ss;
    ss.push("\n");
    ss.push("World!");
    ss.push(", ");
    ss.push("Hello");

    cout << "First some strings.\n";
    ss.print();
    cout << "\n";

    while(!ss.is_empty()) {
        cout << ss.pop();
    }

    cout << "\nNow some ints.\n";
    Stack<int> is;
    is.push(128);
    is.push(64);
    is.push(32);
    is.push(16);
    is.push(8);
    is.push(4);
    is.push(2);
    is.push(1);
    is.print();
    cout << "\n";

    while(!is.is_empty()) {
        cout << is.pop() << " ";
    }
    cout << "\n";
}
