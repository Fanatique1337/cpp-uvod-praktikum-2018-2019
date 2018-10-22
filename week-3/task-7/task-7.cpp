#include <iostream>

int main()
{
    int fibonacci[19] = {0};
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int counter = 2; counter <= 20; counter++)
    {
        fibonacci[counter] = fibonacci[counter-1] + fibonacci[counter-2];
    }

    for (int counter = 0; counter < sizeof(fibonacci) / sizeof(int); counter++)
    {
        std::cout << fibonacci[counter] << std::endl;
    }

    return 0;
}