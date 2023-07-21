#include <iostream>
using namespace std;

int main()
{
	int base = 0, power = 0;
    long long result = 1;
	cout << "Input a Base: ";
	cin >> base;
	
	cout << "Input a Power: ";
	cin >> power;
	
	for (int x = 1; x <= power; x++)
	{
		result = result * base;
	}
	cout << result;
		
	return 0;
}