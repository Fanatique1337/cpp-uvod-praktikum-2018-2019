#include <iostream>
#include <cmath>

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int digits = 0, digit;

    int temp = number;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;

    int temp2 = number;
    while (temp2 != 0)
    {
        digit = temp2 % 10;
        sum += pow(digit, digits);
        temp2 /= 10;
    }

    if (sum == number)
        std::cout << "true";
    else
        std::cout << "false";

    std::cout << std::endl;

    return 0;
}