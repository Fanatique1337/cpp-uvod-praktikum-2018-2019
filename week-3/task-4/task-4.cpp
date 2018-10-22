#include <iostream>

int main()
{
    int number = 0;

    while (number < 10 || number > 200)
    {
        std::cout << "Enter a number between 10 and 200: ";
        std::cin >> number;
    }

    for (int counter = number; counter > 9; counter--)
    {
        if (counter % 7 == 0)
            std::cout << counter << std::endl;
    }

    return 0;
}