#include <iostream>

using namespace  std;

int main()
{
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;

    cout << "a is " << a << "\n" << "b is " << b << "\n";
    return 0;
}