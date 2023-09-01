#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct User
{
    string username;
    string password;
};
struct Items
{
    string name;
    double price;
    int stock;
};

void manager_login();

int main()
{
    int user_type;

    cout << endl;
    cout << "===============>>>>> Amber Bakery <<<<<===============\n\n";
    cout << "Choose User Type\n\n";
    cout << "1. Customer\n";
    cout << "2. Cashier\n";
    cout << "3. Manager\n";
    cout << "\n=======================================================\n\n";
    cout << "Enter the number corresponding to your User Type: ";
    cin >> user_type;
    
    switch (user_type)
    {
        case 1:
            cout << "---------- Welcome Customer ----------\n";
            break;
        case 2:
            cout << "----------- Welcome Cashier -----------\n";
            break;
        case 3:
            cout << "\n----------- Welcome Manager -----------\n";
            manager_login();
            break;
        default:
            cout << "Invalid user type selected. Please select a valid user type (1, 2, or 3).\n";
            break;
    }
    
    return 0;
}

void manager_login()
{
    User user;
    string inputUsername, inputPassword;
    bool loggedIn = false;

    cout << "Enter username: ";
    cin >> inputUsername;
    cout << "Enter password: ";
    cin >> inputPassword;

    ifstream file("managers.txt");
    if (file.is_open())
    {
        while (file >> user.username >> user.password)
        {
            if (inputUsername == user.username && inputPassword == user.password)
            {
                loggedIn = true;
                break;
            }
        }
        file.close();
    }

    void add_manager();
    void add_items();
    void remove_items();
    void edit_items();

    if (loggedIn)
    {
        cout << "Login successful!" << endl;
        int choice;
        do
        {
            cout << "\nManager Menu:\n" << endl;
            cout << "1. Add Item" << endl;
            cout << "2. Remove Item" << endl;
            cout << "3. Edit Item" << endl;
            cout << "4. Add New Manager" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    add_items();
                    break;
                case 2:
                    remove_items();
                    break;
                case 3:
                    edit_items();
                    break;
                case 4:
                    add_manager();
                    break;
                case 0:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    break;
            }
        } while (choice != 0);
    }
    else
    {
        cout << "Login failed!" << endl;
    }
}

void add_manager()
{
    string newUsername, newPassword;
    cout << "Enter new manager's username: ";
    cin >> newUsername;
    cout << "Enter new manager's password: ";
    cin >> newPassword;

    ofstream file("managers.txt", ios::app);
    if (file.is_open())
    {
        file << newUsername << " " << newPassword << endl;
        file.close();
        cout << "New manager added successfully!" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void add_items()
{
    Items item;
    cout << "Enter item name: ";
    cin >> item.name;
    cout << "Enter item price: ";
    cin >> item.price;
    cout << "Enter item stock: ";
    cin >> item.stock;

    ofstream file("items.txt", ios::app);
    if (file.is_open())
    {
        file << item.name << " " << item.price << " " << item.stock << endl;
        file.close();
        cout << "Item added successfully!" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void remove_items()
{
    string itemName;
    cout << "Enter the name of the item to remove: ";
    cin >> itemName;

    ifstream fileIn("items.txt");
    ofstream fileOut("temp.txt");
    if (fileIn.is_open() && fileOut.is_open())
    {
        string name;
        double price;
        int stock;
        bool found = false;
        while (fileIn >> name >> price >> stock)
        {
            if (name == itemName)
            {
                found = true;
            }
            else
            {
                fileOut << name << " " << price << " " << stock << endl;
            }
        }
        fileIn.close();
        fileOut.close();

        if (found)
        {
            remove("items.txt");
            rename("temp.txt", "items.txt");
            cout << "Item removed successfully!" << endl;
        }
        else
        {
            remove("temp.txt");
            cout << "Item not found!" << endl;
        }
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void edit_items()
{
    string itemName;
    cout << "Enter the name of the item to edit: ";
    cin >> itemName;

    ifstream fileIn("items.txt");
    ofstream fileOut("temp.txt");
    if (fileIn.is_open() && fileOut.is_open())
    {
        string name;
        double price;
        int stock;
        bool found = false;
        while (fileIn >> name >> price >> stock)
        {
            if (name == itemName)
            {
                found = true;
                cout << "Enter new item price: ";
                cin >> price;
                cout << "Enter new item stock: ";
                cin >> stock;
            }
            fileOut << name << " " << price << " " << stock << endl;
        }
        fileIn.close();
        fileOut.close();

        if (found)
        {
            remove("items.txt");
            rename("temp.txt", "items.txt");
            cout << "Item edited successfully!" << endl;
        }
        else
        {
            remove("temp.txt");
            cout << "Item not found!" << endl;
        }
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}