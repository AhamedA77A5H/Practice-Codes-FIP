#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string title;
    string autor;
    int year;
};

int main()
{
    const int num_books = 3;

    Book books[num_books];

    for (int i = 0; i < num_books; i++)
    {
        cout << "Input Book Title: ";
		getline(cin, books[i].title); // cin >> books[i].title can't handle titles with spaces
		cout << "Input Book Autor: ";
		getline(cin, books[i].autor);
		cout << "Input Book Year: ";
		cin >> books[i].year;
        cin.ignore();
    }

    cout << endl;

    for (int i = 0; i < num_books; i++)
	{
		cout << "Book " << i + 1 << "\n";
		cout << "Title: " << books[i].title << "\n";
		cout << "Autor: " << books[i].autor << "\n";
		cout << "Year: " << books[i].year << "\n\n";
	}

    return 0;
}
