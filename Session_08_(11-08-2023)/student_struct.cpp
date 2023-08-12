#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    double gpa;
};

int main()
{
    const int num_student = 3;

    Student students[num_student];

    students[0] = {"Alice", 20, 3.8};
    students[1] = {"Bob", 22, 3.5};
    students[2] = {"Charlie", 21, 3.2};

    for (int i = 0; i < num_student; i++)
    {
        cout << "Student " << i + 1 << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Age: " << students[i].age << "\n";
        cout << "GPA: " << students[i].gpa << "\n\n";
    }

    return 0;
}

