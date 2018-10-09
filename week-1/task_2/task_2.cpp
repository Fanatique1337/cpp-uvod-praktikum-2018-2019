#include <iostream>

/*
2. Да се въведе цяло число в конзолата и да се определи дали то 
се дели на 2 и 3, но не и на 5.
Примерен вход и изход на програмата:
       6 -> true
       60 -> false
*/

int main()
{
	int number;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> number;

	if ((number % 2 == 0) && (number % 3 == 0) && (number % 5 != 0))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	return 0;
}