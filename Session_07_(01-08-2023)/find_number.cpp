#include <iostream>

int search(int newArray[], int value);

int main()
{
    int a[] = {45, 72, 102, 57, 8, 27}, userInput;
    std::cout << "Take a random guess: ";
    std::cin >> userInput;

    int location = search(a, userInput);

    if (location == -999)
    {
        std::cout << "Value not found.";
    }
    else
    {
        std::cout << "Value found in index " << location;
    }
    return 0;
}

int search(int newArray[], int value)
{
    for (int i = 0; i < 6; i++)
    {
        if (newArray[i] == value)
        {
            return i;
        }
    }
    return -999; 
}
