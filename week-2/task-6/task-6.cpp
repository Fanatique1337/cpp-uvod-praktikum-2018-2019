#include <iostream>

int main()
{
    int number, digit;

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Enter the digit: ";
    std::cin >> digit;

    while (number != 0)
    {
        if (digit == number % 10)
        {
            std::cout << "true" << std::endl;
            return 0;
        }
        
        number /= 10;
    }

    std::cout << "false" << std::endl;

    return 0;
}