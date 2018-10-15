#include <iostream>
#include <cmath>

int main()
{
    int a, b, c = 0;

    std::cout << "Enter number a: ";
    std::cin >> a;

    std::cout << "Enter number b: ";
    std::cin >> b;

    std::cout << "Enter number c: ";
    std::cin >> c;

    int discriminant;
    discriminant = b*b - 4*a*c;

    if (a == 0)
    {
        float x;
        x = -c / b;

        std::cout << "x: " << x << std::endl;

        return 0;
    }

    if (discriminant > 0)
    {
        float x1, x2;
        x1 = ((-b + sqrt(discriminant)) / (2*a));
        x2 = ((-b - sqrt(discriminant)) / (2*a));

        std::cout << "x1: " << x1 << ", x2: " << x2;
    }
    else if (discriminant == 0)
    {
        float x;
        x = (-b / (2*a));

        std::cout << "x: " << x;
    }
    else
        std::cout << "No solution";

    std::cout << std::endl;

    return 0;
}