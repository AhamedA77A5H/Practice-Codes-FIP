#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Type a number: ";
	cin >> number;
	
	int status = number % 2;
	switch (status)
	{
		case 1:
			cout << "number is odd";
			break;
		case 0:
			cout << "number is even";
			break;
	}
	
	return 0;
}
