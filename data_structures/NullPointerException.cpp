#include <string>
#include "NullPointerException.hpp"

using std::string;

string NullPointer::message = "You tried to dereference a null pointer";
string NullPointer::explanation() {
    return message;
}
