#include <iostream>

int main()
{
    int month, date = 0;
    int days_passed = 0;
    int remaining = 0;

    std::cout << "Enter month and date: ";
    std::cin >> month >> date;

    if (month < 1 || month > 12 || date < 1 || date > 31)
    {
        std::cout << "Invalid date";
        return 1;
    }

    for (int counter = 1; counter < month; counter++) 
    {
        if (counter == 2)
            days_passed += 28;
        else if (counter < 8 && counter % 2 == 1)
            days_passed += 31;
        else if (counter < 7)
            days_passed += 30;
        else if (counter % 2 == 0)
            days_passed += 31;
        else
            days_passed += 30;
    }

    remaining = 365 - (days_passed + date);
    std::cout << remaining;

    std::cout << std::endl;

    return 0;
}