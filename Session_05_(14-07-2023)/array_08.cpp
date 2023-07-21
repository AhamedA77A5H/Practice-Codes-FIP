#include <iostream>
using namespace std;

int main ()
{
	int number[] = {10, 20, 30, 40, 50, 60};
	int input, availablitiy = 0;
	
	cout << "Type a number: ";
	cin >> input;
    
	for(int i = 0; i < 6; i++)
	{
		if (input == number[i])
		{
			availablitiy = 1;
			break;
		}
	}

	if (availablitiy == 1)
	{
		cout << "Your number is in the array";
	}
	else
	{
		cout << "Your number is not in the array";
	}
	
	return 0;
}