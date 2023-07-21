#include <iostream>
using namespace std;

int main() 
{
    double ftemp, ctemp;
    cout << "Input Fahrenheit: ";
    cin >> ftemp;

    ctemp = 5.0 / 9.0 * (ftemp - 32); 
    cout << "Celsius is " << ctemp << endl;
    return 0;
}
