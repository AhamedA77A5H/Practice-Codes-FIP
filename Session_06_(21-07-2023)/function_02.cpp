#include <iostream>

void numbers (int number);

int main()
{
    int number;
    std::cout << "Enter the final number: ";
    std::cin >> number;

    numbers (number);

    return 0;
}

void numbers (int number)
{
    for (int x = 1; x <= number; x++)
    {
        std::cout << x << " ";
    }
}