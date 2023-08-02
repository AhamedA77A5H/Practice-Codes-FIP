#include <iostream>

int main()
{
	int marks[] = {23, 45, 67, 89, 12, 54};
	int number = 10;
	int *address = &number;
	
	std::cout << address;
	
	return 0;
}