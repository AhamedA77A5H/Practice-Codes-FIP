#include <iostream>
using namespace  std;
int main()
{
    int num1 = 5, num2 = 10, num3;
    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << "num1 is " << num1 << "\n" << "num2 is " << num2 << "\n";
    return 0;
}