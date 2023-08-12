#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string autor;
    int year;
    int stock;
    double price;
};

int main()
{
    const int num_books = 3;

    Book books[num_books];

    for (int i = 0; i < num_books; i++)
    {
        cout << "Input Book Title: ";
        getline(cin, books[i].title);
        cout << "Input Book Autor: ";
        getline(cin, books[i].autor);
        cout << "Input Book Year: ";
        cin >> books[i].year;
        cout << "Input Book Stock: ";
        cin >> books[i].stock;
        cout << "Input Book Price: ";
        cin >> books[i].price;
        cin.ignore();
    }

    ofstream outFile("Book_price.txt");
    outFile << "Book Details: \n" << endl;
    for (int i = 0; i < num_books; i++)
    {
        outFile << " Book " << i + 1 << "\n";
        outFile << " Title: " << books[i].title << "\n";
        outFile << " Autor: " << books[i].autor << "\n";
        outFile << " Year: " << books[i].year << "\n";
        outFile << " Stock: " << books[i].stock << "\n";
        outFile << " Price: " << books[i].price << "\n\n";
    }
    outFile.close();

    int number;  // Declare the 'number' variable
    cout << "Enter the book number: ";
    cin >> number;

    if (number > 0 && number <= num_books)
    {
        int required_copies;  // Declare the 'required_copies' variable
        cout << "Enter the required number of copies: ";
        cin >> required_copies;

        if (books[number - 1].stock >= required_copies)
        {
            cout << "Your bill amount is " << books[number - 1].price * required_copies;
        }
        else
        {
            cout << "Insufficient stock.";
        }
    }
    else
    {
        cout << "Invalid book number.";
    }

    return 0;
}
