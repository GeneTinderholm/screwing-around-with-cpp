#include <exception>
#include <string>

using std::exception;
using std::string;

class NullPointer : public exception {
    static string message;
    public:
        string explanation() {
            return message;
        }
};

string NullPointer::message = "You tried to dereference a null pointer";
