#include <iostream>
using namespace std;

const int x = 10;

int main()
{
	int numbers [x] = {12, 6, 8, 7, 15};

	for (int i = 0; i <  x; i++)
	{
		cout << "Index " << i << " : " << numbers[i] << "\n";
	}	
	
	return 0;
}

