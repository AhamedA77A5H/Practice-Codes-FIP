#include <iostream>
#include <fstream>
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
            cout << "----------- Welcome Manager -----------\n";
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

    if (loggedIn)
    {
        cout << "Login successful!" << endl;
        int choice;
        do
        {
            cout << "Manager Menu:" << endl;
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
                    // Add item 
                    break;
                case 2:
                    // Remove item 
                    break;
                case 3:
                    // Edit item 
                    break;
                case 4:
                    // Add new manager
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