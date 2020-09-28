#include <exception>
#include <string>

using std::exception;
using std::string;

class NullPointer : public exception {
    static string message;
    public:
        string explanation();
};
