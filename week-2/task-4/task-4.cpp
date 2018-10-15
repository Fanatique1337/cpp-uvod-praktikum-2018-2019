#include <iostream>

int main()
{
    int human_age;
    float dog_age = 0;

    std::cout << "Enter the human age of the dog: ";
    std::cin >> human_age;

    for (int counter = 1; counter <= human_age; counter++)
    {
        counter < 3 ? dog_age += 10.5 : dog_age += 4;
    }

    std::cout << dog_age << std::endl;

    return 0;
}