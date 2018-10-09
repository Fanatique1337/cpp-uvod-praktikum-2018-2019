#include <iostream>

/*
3. Y = 2*x + 5 e уравнение на права. Определете дали точка с координати, 
въведени от конзолата, лежи на правата.
Примерен вход и изход на програмата:
       x=7, y=19 -> true
       x=7, y=22 -> false
*/

int main()
{
	int x, y;

	std::cout << "Enter X coordinate: " << std::endl;
	std::cin >> x;
	std::cout << "Enter Y coordinate: " << std::endl;
	std::cin >> y;

	if ((x*2 + 5) == y)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	return 0;
}