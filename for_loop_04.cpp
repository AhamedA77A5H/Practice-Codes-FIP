#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input a Number: ";
	cin >> number;
	
	for (int x = 0; x <= number; x++)
	{
		cout << x * 3 << " ";
	}

    return 0;
}
