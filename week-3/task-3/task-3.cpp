#include <iostream>

int main()
{
    int number;
    int result = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int counter = number; counter > 0; counter--)
    {
        result *= counter;
    }

    std::cout << result << std::endl;

    return 0;
}