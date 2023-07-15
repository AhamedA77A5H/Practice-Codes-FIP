#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Input a number (-1 will end the program): ";
    cin >> number;

    while (number != -1)
    {
        cout <<  number * number << endl;

        cout << "Input a number (-1 will end the program): ";
        cin >> number;
    }
    return 0;
}