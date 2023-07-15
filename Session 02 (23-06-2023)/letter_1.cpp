#include <iostream>
using namespace std;

int main()
{
	char letter;
	cout << "Type a letter: ";
	cin >> letter;
	
	switch (letter)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			cout << "It is a vowel";
			break;
		default:
			cout << "It is a consonent";
	}
	return 0;
}