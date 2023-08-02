#include <iostream>

void check(int marks[], int *address);

int main()
{
	int marks[] = {23, 45, 67, 89, 12, 54};
	int number = 10;
	
	check(marks, &number);
	
	std::cout << marks[0] << std::endl;
	std::cout << number;
	
	return 0;
}

void check(int marks[], int *address)
{
	marks[0] = 100;
	*address = 20;
}