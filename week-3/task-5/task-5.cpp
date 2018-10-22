#include <iostream>

int main()
{
    int numbers[100] = {0};
    int sum = 0, average = 0;
    int array_length;

    for (int counter = 0; counter < 100; counter++)
    {
        int input;
        std::cout << "Enter number " << counter+1 << ": ";
        std::cin >> input;

        if (input >= 1 && input <= 200)
            numbers[counter] = input;
        else
        {
            array_length = counter;
            break;
        }
    }

    for (int counter = 0; counter < array_length; counter++)
    {
        sum += numbers[counter];
    }

    average = sum / array_length;

    std::cout << "count = " << array_length << ", sum = " << sum << ", average = " << average;
    std::cout << std::endl;

    return 0;
    
}