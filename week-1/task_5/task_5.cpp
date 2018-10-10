#include <iostream>

/*5. Да се обърнат цифрите на въведено 4-цифрено число.
Примерен вход и изход на програмата:
       1234 -> 4321
*/

int main()
{
	int number, digit, reverse_number = 0;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> number;

	// Алгоритъма за обръщане от task_4.
	while (number != 0)
	{
		digit = number % 10;
		reverse_number = (reverse_number * 10) + digit;
		number /= 10;
	}

	std::cout << reverse_number << std::endl;

	return 0;
}