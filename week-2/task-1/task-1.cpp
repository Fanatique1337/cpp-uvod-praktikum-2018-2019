#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Enter the third number: ";
    std::cin >> c;

    if (a > b)
        a > c ? std::cout << a : std::cout << c;
    else
        b > c ? std::cout << b : std::cout << c;

    std::cout << std::endl;

    return 0;
}