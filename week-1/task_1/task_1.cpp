#include <iostream>

/*
using namespace std;
// Може да го използвате, но е препоръчително да не се ползва,
защото след време като започнем да използваме повече и по-сложни
функции от няколко библиотеки, и чиито имена се повтарят, ще си
имаме доста по-големи проблеми.
*/


/*
1. Да се въведат две цели числа в конзолата и да се определи дали първото
е делител на второто.
Примерен вход и изход на програмата:
       2 6 -> true
       3 5 -> false
*/

int main()
{
	int number_a, number_b;

	std::cout << "Enter the first number: " << std::endl;
	std::cin >> number_a;
	std::cout << "Enter the second number: " << std::endl;
	std::cin >> number_b;

	if ((number_b % number_a) == 0)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	return 0;
}