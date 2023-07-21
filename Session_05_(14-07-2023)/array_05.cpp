#include <iostream>
using namespace std;

int main ()
{
	int numbers[] = {2, 3, 4, 5, 6, 7};
	int total = 0;
	
	for(int i = 0; i < 6; i++) // you can also use (int i = 0; i <= 5; i++)
	{
		total = total + numbers[i];	
	}
	cout << total;
	
	return 0;
}
