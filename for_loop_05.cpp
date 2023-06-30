#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input a Number: ";
	cin >> number;
	
	for (int x = 0; x <= number; x++)
	{
		cout << x << "\t * \t 3  \t = \t" << x * 3 << endl;
	}

    return 0;
}
