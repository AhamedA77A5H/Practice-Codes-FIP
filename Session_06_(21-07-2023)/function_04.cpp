#include <iostream>

int count_odd_numbers(int new_array[]);

int main ()
{
	int marks[] = {1, 4, 6, 8, 9,13, 6};
	
	int n = count_odd_numbers(marks);
	std::cout << "\nOdd number count: " << n;
	return 0;
}

int count_odd_numbers(int new_array[])
	{
		int counter = 0;
		std::cout << "Odd array: ";
		for(int i = 0; i < 7; i++)
		{
			if (new_array [i] % 2 == 1)
			{
				counter++;
				std::cout << new_array[i] << " ";
			}
				
		}
		return counter;
	}
    