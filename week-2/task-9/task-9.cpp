#include <iostream>

int main()
{
    char operand;
    int a, b;

    std::cout << "Enter operator, number 1, and number 2: ";
    std::cin >> operand >> a >> b;

    switch(operand)
    {
        case '+':
            std::cout << a + b;
            break;
        case '-':
            std::cout << a - b;
            break;
        case '/':
            std::cout << a / b;
            break;
        case '*':
            std::cout << a * b;
            break;
        case '%':
            std::cout << a % b;
            break;
        default:
            std::cout << "Wrong operator";
            break;
    }

    std::cout << std::endl;

    return 0;
}