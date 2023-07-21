#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "What is your age ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are elegible to vote" << endl;
    }
    else
    {
        cout << "You are not elegible to vote" << endl;
    }
    return 0;
}