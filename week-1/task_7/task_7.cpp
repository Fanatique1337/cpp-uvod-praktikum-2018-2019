#include <iostream>

/*
7. Да се сменят стойностите на две променливи.

    С допълнителна променлива
    Само с операторите +,-,*, /
    Примерен вход и изход на програмата:
           a=5, b=6 -> a=6, b=5
*/

/*
Първият начин е ясен и няма да го описвам:
Имаме трета променлива c.
c = a;
a = b;
b = c;
И готово, a & b са разменени.

Затова ще покажа другият начин, без допълнителна променлива.
*/

int main()
{
	int a, b;

	std::cout << "Enter the first number: " << std::endl;
	std::cin >> a;
	std::cout << "Enter the second number: " << std::endl;
	std::cin >> b;

	/*
	a = 10, b = 5;
	a = a + b = 10 + 5 = 15;
	b = a - b = 15 - 5 = 10;
	a = a - b = 15 - 10 = 5;
	*/

	a += b;
	b = a - b;
	a -= b;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	return 0;
}