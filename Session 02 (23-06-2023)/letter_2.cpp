#include <iostream>
using namespace std;

int main()
{
	char letter;
	cout << "Type a letter: ";
	cin >> letter;
	
	bool status (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' ||letter == 'u' || letter == 'U');
	switch (status)
	{
		case 1:
			cout << "It is a vowel";
			break;
		case 0:
			cout << "It is a consonent";
			break;
	}
	return 0;
}