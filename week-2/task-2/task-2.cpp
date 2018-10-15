#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "Enter side A's length: ";
    std::cin >> a;

    std::cout << "Enter side B's length: ";
    std::cin >> b;

    std::cout << "Enter side C's length: ";
    std::cin >> c;

    if (a*a + b*b > c*c)
        std::cout << "Triangle is acute-angled.";
    else if (a*a + b*b < c*c)
        std::cout << "Triangle is obtuse-angled.";
    else
        std::cout << "Triangle is right-angled.";

    std::cout << std::endl;
    
    return 0;
}