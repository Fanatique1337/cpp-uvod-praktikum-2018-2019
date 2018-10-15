#include <iostream>

int main()
{
    char symbol;

    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    if (symbol > 96 && symbol < 123)
        std::cout << "Symbol is a lowercase letter.";
    else if (symbol > 64 && symbol < 91)
        std::cout << "Symbol is an uppercase letter.";
    else if (symbol > 47 && symbol < 58)
        std::cout << "Symbol is digit.";
    else
        std::cout << "Symbol is something else.";

    std::cout << std::endl;

    return 0;
}