#include <iostream>
#include <vector>
#include <algorithm>

bool has_repeating_digits (int);

int main()
{
    for (int counter = 100; counter < 1000; counter++)
    {
        if (!has_repeating_digits(counter))
            std::cout << counter << " ";
    }

    return 0;
}

bool has_repeating_digits (int num)
{
    int temp = num;
    std::vector< int > known_digits; 
    
    while (temp != 0)
    {
        known_digits.push_back(temp % 10);
        temp /= 10;
    }

    int digit;
    for (int counter = 0; num != 0; counter++)
    {
        digit = num % 10;
        if (std::find(known_digits.begin(), known_digits.end(), digit) != known_digits.end())
            return true;
        num /= 10;
    }

    return false;
}