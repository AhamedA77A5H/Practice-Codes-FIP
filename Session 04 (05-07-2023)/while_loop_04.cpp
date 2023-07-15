#include <iostream>
using namespace std;

int main()
{
    int number = 5, guess;
    cout << "Guess the number: ";
    cin >> guess;

    while (number != guess)
    {
        cout << "You are wrong. Guess the number again: ";
        cin >> guess;
        
        if (number == guess)
        {
            cout << "Your guess is correct";
        }
    }
    return 0;
}