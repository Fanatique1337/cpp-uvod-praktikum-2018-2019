#include <iostream>

int main()
{
    int month;

    std::cout << "Enter a month: ";
    std::cin >> month;

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            std::cout << "Winter";
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Spring";
            break;
        case 6:
        case 7:
        case 8:
            std::cout << "Summer";
            break;
        case 9:
        case 10:
        case 11:
            std::cout << "Autumn";
            break;
        default:
            std::cout << "There is no such month.";
            break;
    }

    std::cout << std::endl;

    return 0;
}