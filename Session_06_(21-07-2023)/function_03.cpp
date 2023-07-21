#include <iostream>

int multi_number(int num1, int num2);

int main()
{
    int number1, number2;
    std::cout << "Enter Number 1: ";
    std::cin >> number1;
    std::cout << "Enter Number 2: ";
    std::cin >> number2;

    int answer = multi_number(number1, number2);
    std::cout << answer;

    return 0;
}

int multi_number(int num1, int num2)
{
    int total = num1 * num2;
    return total;
}
