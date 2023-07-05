#include <iostream>
using namespace std;

int main()
{
    int number = 5, guess;
    bool isguess = false;
    
    while (! isguess)
    {
        cout << "Guess the number: ";
        cin >> guess;
        
        if (number == guess)
        {
            cout << "Your guess is correct";
            isguess = true;
        }
    }
    return 0;
}