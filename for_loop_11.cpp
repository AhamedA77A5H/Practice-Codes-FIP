#include <iostream>
using namespace std;

// Function to calculate power
long long calculatePower(int base, int power)
{
    long long result = 1;
    for (int x = 1; x <= power; x++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base = 0, power = 0;
    cout << "Input a Base: ";
    cin >> base;

    cout << "Input a Power: ";
    cin >> power;

    long long result = 1;
    for (int x = 1; x <= power; x++)
    {
        result = result * base;
    }
    cout << result;

    return 0;
}
