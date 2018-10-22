#include <iostream>

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = 0;

    for (int counter = 1; counter < number; counter++)
    {
        if (number % counter == 0)
            sum += counter; 
    }

    if (sum == number)
        std::cout << "true";
    else
        std::cout << "false";

    std::cout << std::endl;

    return 0;
}