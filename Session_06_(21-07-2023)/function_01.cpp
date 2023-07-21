#include <iostream>

void add_numbers(int num1, int num2);

int main ()
{
	int number1, number2;
	std::cout << "Enter Number 1: ";
	std::cin >> number1;
	std::cout << "Enter Number 2: ";
	std::cin >> number2;
	
	add_numbers(number1, number2);
	
	return 0;
}

void add_numbers(int num1, int num2)
	{
		int total = num1 + num2;
		std::cout << "Total: " << total;
	}