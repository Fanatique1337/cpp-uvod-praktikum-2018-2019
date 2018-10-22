#include <iostream>
#include <cmath>

bool is_prime (int);

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (is_prime(number))
        std::cout << "true";
    else
        std::cout << "false";

    std::cout << std::endl;

    return 0;
}

bool is_prime (int num)
{
    if (num < 2)
        return false;

    int max_num = (int)sqrt((double)num) + 1;

    for (int counter = 2; counter <= max_num; counter++)
    {
        if (num % counter == 0)
            return false;
    }

    return true;
}