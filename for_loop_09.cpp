#include <iostream>
using namespace std;

int main()
{
	int odd_total = 0, even_total = 0;
	
	for (int x = 1; x <= 10; x++)
	{
		if (x % 2 == 0)
		{
			even_total = even_total + x;
		}
		else
		{
			odd_total = odd_total + x;
		}
	}
	
	cout << "Odd Total: " << odd_total << endl << "Even Total: " << even_total << endl;
	
	return 0;
}
