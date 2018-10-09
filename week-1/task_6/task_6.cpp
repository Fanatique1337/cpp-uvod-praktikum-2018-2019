#include <iostream>

/*
6. По въведени в конзолата координати (x, y) на точка, проверете 
дали тя лежи в, извън или на окръжност с радиус 6. Нека x и y са цели числа. 
Примерен вход и изход на програмата:
       x=4, y=3 -> true
       x=7, y=2 -> false
*/

int main()
{
	int xpos, ypos;
	int radius = 6;

	std::cout << "Enter X coordinate: " << std::endl;
	std::cin >> xpos;
	std::cout << "Enter Y coordinate: " << std::endl;
	std::cin >> ypos;

	if (xpos*xpos + ypos*ypos < radius*radius)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	return 0;
}