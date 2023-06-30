#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input a Number: ";
	cin >> number;
	
	cout << "Number\tSquare\tCube" << endl;
	
	for (int x = 0; x <= number; x++)
	{
		cout << x << "\t" << x*x << "\t" << x*x*x << endl;
	}

    return 0;
}
