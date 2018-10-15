#include <iostream>

int main()
{
    int month;

    std::cout << "Enter a month number: ";
    std::cin >> month;

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31";
            break;
        case 2:
            std::cout << "28";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30";
            break;
        default:
            std::cout << "No such month.";
            break;
    }

    std::cout << std::endl;

    return 0;
}