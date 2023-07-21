#include <iostream>
using namespace std;

int main ()
{
	int marks[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Input Marks: ";
		cin >> marks[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << marks[i] << " ";
	}
	
	return 0;
}