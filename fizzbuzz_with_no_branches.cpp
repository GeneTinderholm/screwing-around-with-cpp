#include <iostream>
#include <string>

std::string fizzbuzz(unsigned int n);

int main (void) {
    for (int i = 1; i <= 100; ++i) {
        std::cout << fizzbuzz(i) << "\n";
    }

    return 0;
}

std::string fizzbuzz(unsigned int n) {
    std::string (*funcs[]) (unsigned int n)  = {
        [](unsigned int n) { return std::to_string(n); },
        [](unsigned int n) { return (std::string) "FIZZ"; },
        [](unsigned int n) { return (std::string) "BUZZ"; },
        [](unsigned int n) { return (std::string) "FIZZBUZZ"; },
    };
    int indexes[] = { 3, 0, 0, 1, 0, 2, 1, 0, 0, 1,  2,  0,  1,  0,  0 };
    return funcs[indexes[n % 15]](n);
}
