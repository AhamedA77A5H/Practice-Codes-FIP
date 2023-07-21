#include <iostream>
using namespace std;

int main()
{
	int attendance, assignment_marks;
	
	cout << "Input Attendance Presentage: ";
	cin >> attendance;
	
	cout << "Input Assingnment Marks: ";
	cin >> assignment_marks;
	
	if (attendance > 60 && assignment_marks > 70 )
	{
		cout << "Eligible for final exam" << endl;
	}
	else
	{
		cout << "Not eligible for final exam" << endl;
	}
	return 0;
}
