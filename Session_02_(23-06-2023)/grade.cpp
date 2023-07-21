#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Input marks Between 1 -100: ";
	cin >> marks;
	
	if (marks > 100 || marks < 0)
	{
		cout << "Invalid marks" << endl;
	}
	else
	{
		if (marks >= 75)
		{
		cout << "Grade: A" << endl;
		}
		else if (marks >= 65)
		{
		cout << "Grade: B" << endl;
		}
		else if (marks >= 40)
		{
		cout << "Grade: C" << endl;
		}
		else 
		{
		cout << "Grade: D" << endl;
		}
	}	
	return 0;
}