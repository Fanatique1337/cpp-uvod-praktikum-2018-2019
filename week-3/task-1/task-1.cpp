#include <iostream>

int main()
{
    int number;
    int digits = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (number != 0)
    {
        number /= 10;
        digits += 1;
    }

    std::cout << digits << std::endl;

    return 0;
}