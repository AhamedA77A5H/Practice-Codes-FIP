#include <iostream>
using namespace std;

int main ()
{
	int number[] = {10, 20, 30, 40, 50, 60};
	
	for (int i = 5; i >= 0; i--)  // or (int i = 6; i > 0; i--)
    
    {
		cout << number[i] << " ";
	}
	
	return 0;
}
