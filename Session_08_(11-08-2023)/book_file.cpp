#include <iostream>
#include <fstream>
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
		
	for(int i = 0; i < num_books; i++)
	{
		cout << "Input Book Title: ";
		getline(cin, books[i].title); // cin >> books[i].title can't handle titles/names with spaces
		cout << "Input Book Autor: ";
		getline(cin, books[i].autor);
		cout << "Input Book Year: ";
		cin >> books[i].year;
        cin.ignore();
	}
	
	ofstream outFile ("Book_details.txt");
	outFile << "Book Details: \n" << endl;
		for (int i = 0; i < num_books; i++)
	{
		outFile << " Book " << i + 1 << "\n";
		outFile << " Title: " << books[i].title << "\n";
		outFile << " Autor: " << books[i].autor << "\n";
		outFile << " Year: " << books[i].year << "\n\n";
	}
	outFile.close();
	
	string my_text;
	
	ifstream MyReadFile ("Book_details.txt");
	
	while (getline (MyReadFile, my_text))
	{
		cout << my_text << endl;
	}
	
	return 0;
	
}
