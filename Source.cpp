#include <iostream>

int main() {

    char    name[100]{};

    std::cout << "Ma name is Andrey, and your? ";
    std::cin  >> name;
    std::cout << "Hello, " << name << "!";

    std::cout << std::endl;
    std::cout << "                               " << std::endl;
    std::cout << "     * * * *                   " << std::endl;
    std::cout << "    *        *                 " << std::endl;
    std::cout << "   *                           " << std::endl;
    std::cout << "   *               *      *    " << std::endl;
    std::cout << "   *             * * *  * * *  " << std::endl;
    std::cout << "   *               *      *    " << std::endl;
    std::cout << "   *                           " << std::endl;
    std::cout << "    *        *                 " << std::endl;
    std::cout << "     * * * *                   " << std::endl;
    std::cout << "                               " << std::endl;
    std::cout << "                               " << std::endl;

    return EXIT_SUCCESS;
}