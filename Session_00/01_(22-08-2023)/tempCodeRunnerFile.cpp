//using paralell arrays for student names and marks
#include <iostream>
#include <fstream>
using namespace std;

const int NoS = 5;//Number of students
void input_marks(string n[NoS], int m[NoS]);
void print_marks(string n[NoS], int m[NoS]);
int find_highest(int hm[NoS]);

int main()
{
	int marks[NoS];
	string names[NoS];
	
	input_marks(names, marks);
	cout << endl << "------ STUDENT MARKS ------\n";
	cout << "Name" << "\t" << "Marks"<< endl;
	print_marks(names, marks);
	int highest = int find_highest;
	cout << "Highest Marks: " << highest
	return 0;
}

void input_marks(string n[NoS], int m[NoS])
{
	for (int i = 0; i < NoS; i++)
	{
		cout << "Enter Name:";
		cin >> n[i];
		cout << "Enter Marks:";
		cin >> m[i];
		cout << endl;
	}
}
void print_marks(string n[NoS], int m[NoS])
{
	for (int i = 0; i < NoS; i++)
	{
		cout << n[i] << "\t" << m[i] << endl;
	}
}
int find_highest(int hm[NoS])
{
	int max = hm[0];
	for (int i = 0; i < NoS; i++)
	{
		if (max < hm[i])
		{
			max = hm[i];
		}
	}
	return max;
}