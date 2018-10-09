#include <iostream>

/*
4. Да се въведе от клавиатурата положително 4-цифрено цяло число. Да се провери 
дали числото е палиндром. Палиндромът е една или няколко думи или числа, 
които се четат по един и същ начин от ляво надясно и от дясно наляво.
Примерен вход и изход на програмата:
       2112 -> true
       2114 -> false
*/

int main()
{
	int number, digit, temp, reverse_number = 0;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> number;

	temp = number;

	while (temp != 0)
	{
		digit = temp % 10;
		reverse_number = (reverse_number * 10) + digit;
		temp /= 10;
	}

	if (reverse_number == number)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	return 0;
}