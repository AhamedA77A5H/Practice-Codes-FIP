#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char letter;
	cout << "Type a letter: ";
	cin >> letter;
    
	if (isalpha(letter))
	{
		bool lower_status (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
        bool upper_status (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
	    switch (lower_status || upper_status)
		{
		case 1:
			cout << "It is a vowel";
			break;
		case 0:
			cout << "It is a consonent";
			break;
		}
	}
	else
	{
		cout << "Invalid Character";
	}
	
	return 0;
}
