#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input a Number: ";
	cin >> number;
	
	int times;
	cout << "Input Number of times: ";
	cin >> times;
	
	for (int x = 0; x <= times; x++)
	{
		cout << x << "\t*\t" << number << "\t=\t " << x * number << endl;
	}

    return 0;
}
