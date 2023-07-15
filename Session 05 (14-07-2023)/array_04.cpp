#include <iostream>
using namespace std;

int main ()
{
	int numbers[10];
	int cube = 0;
	
	for(int i = 1; i <= 10; i++)
	{
		cube = i*i*i;
		numbers[i-1] = cube;
	}
	
	for(int i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}

	return 0;
}