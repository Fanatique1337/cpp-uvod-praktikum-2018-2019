#include <iostream>

int main()
{
    int year;

    std::cout << "Enter an year: ";
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                std::cout << "true";
            else
                std::cout << "false";
        }
        else
            std::cout << "true";
    }
    else
        std::cout << "false";

    std::cout << std::endl;

    return 0;
}