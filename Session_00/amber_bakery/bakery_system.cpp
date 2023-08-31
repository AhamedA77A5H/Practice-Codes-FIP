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
            break;
        default:
            cout << "Invalid user type selected. Please select a valid user type (1, 2, or 3).\n";
            break;
    }
    
    return 0;
}

