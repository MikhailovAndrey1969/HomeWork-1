#include <iostream>

int main() {

    char    *name;
    int     age;

    std::cout << "Hello! Ma name is Andrey, and your? " ;
    std::cin >> name;
    std::cout << "Hello, " << name << "! I'am 56 years and about you? ";
    std::cin >> age;

    return EXIT_SUCCESS;
}
