#include <iostream>
using namespace std;

int main()
{
    int total = 0, number;

    do
    {
        cout << "Input a number (input 0 to end program): ";
        cin >> number;
        total += number;
    }
    while (number != 0);
    {
        cout << total;
    }
    return 0;
}