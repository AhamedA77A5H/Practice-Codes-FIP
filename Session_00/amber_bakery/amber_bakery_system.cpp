#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
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

void select_user();
void logout();
void manager_login();
void cashier_login();
void customer_login();
void display_items();
void sign_up();
void about_us();
void display_logo();

int main()
{
    {
       	int user_type;

    cout << endl;
    cout << "=====================================================================\n";
    display_logo();
    cout << "\n\nWelcome to Amber Bakery - A Taste of Delight!";
    cout << "\n\nWe've been serving delightful pastries and bakery items since 1990.";
    cout << "\nVisit us at 123 Baker Street, London, UK.";
    cout << "\nContact us at +44 123-456-7890.";
    cout << "\nWebsite: www.amberbakery.co.uk";
    cout << "\n\n----------------------------------------------------------------------\n\n" << endl;
    
    cout << "1. Login\n";
    cout << "2. Register\n";
    cout << "3. About Us\n";
    cout << "4. Price List\n";
    cout << "0. Exit";
    cout << "\n\n======================================================================\n\n";
    cout << "Enter the number corresponding to your option: ";
    cin >> user_type;
    
    switch (user_type)
    {
        case 1:
            select_user();
            break;
        case 2:
            sign_up();
            main();
            break;
        case 3:
            about_us();
            break;
        case 4:
            display_items();
            main();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;    
        default:
            cout << "Invalid user type selected. Please select a valid user type (1, 2, 3 or 4).\n";
            break;
    }
}
    
    
    return 0;
}

void select_user()
{
       	int user_type;

    cout << endl;
    cout << "================>>>>> Amber Bakery <<<<<================\n\n";
    cout << "Choose User Type for Login\n\n";
    cout << "1. Customer\n";
    cout << "2. Cashier\n";
    cout << "3. Manager\n";
    cout << "4. Back to main menu\n";
    cout << "0. Exit";
    cout << "\n\n========================================================\n\n";
    cout << "Enter the number corresponding to your User Type: ";
    cin >> user_type;
    
    switch (user_type)
    {
        case 1:
            cout << "\n\n================>>>>> Amber Bakery <<<<<================\n";
            cout << "\n------------------- Welcome Customer -------------------\n\n";
            customer_login();
            break;
        case 2:
            cout << "\n\n================>>>>> Amber Bakery <<<<<================\n";
            cout << "\n------------------- Welcome Cashier -------------------\n\n";
            cashier_login();
            break;
        case 3:
            cout << "\n\n================>>>>> Amber Bakery <<<<<================\n";
            cout << "\n------------------- Welcome Manager -------------------\n\n";
            manager_login();
            break;
        case 4:
            main();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;    
        default:
            cout << "Invalid user type selected. Please select a valid user type (1, 2, 3 or 4).\n";
            break;
    }
}

void logout()
{
	cin.clear();
    select_user();
}

void manager_login()
{
    User user;
    string input_username, input_password;
    bool loggedIn = false;

    cout << "Enter username: ";
    cin >> input_username;
    cout << "Enter password: ";
    cin >> input_password;

    ifstream file("managers.txt");
    if (file.is_open())
    {
        while (file >> user.username >> user.password)
        {
            if (input_username == user.username && input_password == user.password)
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
    void add_cashier();

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
            cout << "5. Add New Cashier" << endl;
            cout << "6. Log Out" << endl;
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
                    manager_login();
                    break;
                case 5:
                    add_cashier();
                    manager_login();
                    return;
                case 6:
                    logout();
                    return;
                case 0:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please select a valid Choice (1, 2, 3, 4 or 5)" << endl;
                    break;
            }
        } while (choice != 0);
    }
    else
    {
        cout << "Login failed!" << endl;
        manager_login();
    }
}

void add_manager()
{
    string new_username, new_password;
    cout << "\nPlease Enter _ Insted of a SPACE Between Two Names (IF APPLICABLE)\n";
    cout << "Enter new manager's username: ";
    cin >> new_username;
    cout << "Enter new manager's password: ";
    cin >> new_password;

    ofstream file("managers.txt", ios::app);
    if (file.is_open())
    {
        file << new_username << " " << new_password << endl;
        file.close();
        cout << "New manager added successfully!" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void add_cashier()
{
    string new_username, new_password;
    cout << "\nPlease Enter _ Insted of a SPACE Between Two Names (IF APPLICABLE)\n";
    cout << "Enter new cashier's username: ";
    cin >> new_username;
    cout << "Enter new cashier's password: ";
    cin >> new_password;

    ofstream file("cashier.txt", ios::app);
    if (file.is_open())
    {
        file << new_username << " " << new_password << endl;
        file.close();
        cout << "New cashier added successfully!" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void add_items()
{
    Items item;
    display_items();
    cout << "\nPlease enter _ insted of a SPACE between two words\n";
    cout << "Enter item name: ";
    cin.ignore();
	getline (cin, item.name);
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
    string item_name;
    display_items();
    cout << "Enter the name of the item to remove: ";
    cin.ignore();
	getline (cin, item_name);

    ifstream file_in("items.txt");
    ofstream file_out("temp.txt");
    if (file_in.is_open() && file_out.is_open())
    {
        Items item;
        bool found = false;
        while (file_in >> item.name >> item.price >> item.stock)
        {
            if (item.name == item_name)
            {
                found = true;
            }
            else
            {
                file_out << item.name << " " << item.price << " " << item.stock << endl;
            }
        }
        file_in.close();
        file_out.close();

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
    string item_name;
    display_items();
    cout << "Enter the name of the item to edit: ";
    cin.ignore();
	getline (cin, item_name);

    ifstream file_in("items.txt");
    ofstream file_out("temp.txt");
    if (file_in.is_open() && file_out.is_open())
    {
        Items item;
        bool found = false;
        while (file_in >> item.name >> item.price >> item.stock)
        {
            if (item.name == item_name)
            {
                found = true;
                cout << "Enter new item price: ";
                cin >> item.price;
                cout << "Enter new item stock: ";
                cin >> item.stock;
            }
            file_out << item.name << " " << item.price << " " << item.stock << endl;
        }
        file_in.close();
        file_out.close();

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

void display_items()
{
    ifstream file("items.txt");
    if (file.is_open())
    {
        Items item;
        int item_number = 1; 

        cout << "------------------------ Items List ------------------------\n" << endl;
        cout << setw(25) << "Name" << "\t" << setw(7) << "Price" << "\t\t" << setw(5) << "Stock" << endl;

        while (file >> item.name >> item.price >> item.stock)
        {
            cout << setw(25) << item.name << "\tGBP " << setw(7) << fixed << showpoint << setprecision(2) << item.price << "\t" << setw(5) << item.stock << endl;
            item_number++; 
        }

        cout << "\n----------------------------------------------------------\n" << endl;
        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void customer_login()
{
    User user;
    string input_username, input_password;
    bool loggedIn = false;

    cout << "Enter username: ";
    cin >> input_username;
    cout << "Enter password: ";
    cin >> input_password;

    ifstream file("customers.txt");
    if (file.is_open())
    {
        while (file >> user.username >> user.password)
        {
            if (input_username == user.username && input_password == user.password)
            {
                loggedIn = true;
                break;
            }
        }
        file.close();
    }

   void buy_items();
    if (loggedIn)
    {
        cout << "Login successful!" << endl;
        int choice;
        do
        {
            cout << "\nCustomer Menu:\n" << endl;
            cout << "1. View Item List" << endl;
            cout << "2. Buy items" << endl;
            cout << "3. Log Out" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    display_items();
                    break;
                case 2:
                    buy_items();
                    break;
                case 3:
                    logout();
                    return;
                                
                case 0:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please select a valid Choice (0, 1, 2, or 3)" << endl;
                    break;
            }
        } while (choice != 0);
    }
    else
    {
        cout << "Login failed!" << endl;
        customer_login();
    }
}

void buy_items()
{
    display_items();

    int item_number;
    int quantity;
    double total_amount = 0.0;

    ifstream file_in("items.txt");
    ofstream file_out("temp.txt");

    if (file_in.is_open() && file_out.is_open())
    {
        Items item;
        bool found_at_least_one_item = false;

        while (true)
        {
            cout << "Enter 1 to Start (or '0' to finish): ";
            cin >> item_number;

            if (item_number == 0)
            {
                break;  
            }

            bool found = false;

            file_in.clear();
            file_in.seekg(0, ios::beg);

            while (file_in >> item.name >> item.price >> item.stock)
            {
                if (item_number == item_number)
                {
                    found = true;
                    cout << "Enter the quantity of '" << item.name << "' you want to buy: ";
                    cin >> quantity;

                    if (quantity <= item.stock)
                    {
                        item.stock -= quantity;
                        total_amount += quantity * item.price;
                        found_at_least_one_item = true;
                    }
                    else
                    {
                        cout << "Insufficient stock for '" << item.name << "'!" << endl;
                    }
                }
                file_out << item.name << " " << item.price << " " << item.stock << endl;
            }

            if (!found)
            {
                cout << "Item not found: '" << item_number << "'" << endl;
            }
        }

        file_in.close();
        file_out.close();

        if (found_at_least_one_item)
        {
            remove("items.txt");
            rename("temp.txt", "items.txt");
            cout << "Purchase successful!" << endl;
            cout << "Total amount: GBP " << fixed << setprecision(2) << total_amount << endl;
        }
        else
        {
            remove("temp.txt");
            cout << "No items purchased." << endl;
        }
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void sell_items()
{
    display_items();

    int item_number;
    int quantity;
    double total_amount = 0.0;

    ifstream file_in("items.txt");
    ofstream file_out("temp.txt");

    if (file_in.is_open() && file_out.is_open())
    {
        Items item;
        bool found_at_least_one_item = false;

        while (true)
        {
            cout << "Enter 1 to Start (or '0' to finish): ";
            cin >> item_number;

            if (item_number == 0)
            {
                break;  
            }

            bool found = false;

            file_in.clear();
            file_in.seekg(0, ios::beg);

            while (file_in >> item.name >> item.price >> item.stock)
            {
                if (item_number == item_number)
                {
                    found = true;
                    cout << "Enter the quantity of '" << item.name << "' you want to sell: ";
                    cin >> quantity;

                    if (quantity <= item.stock)
                    {
                        item.stock -= quantity;
                        total_amount += quantity * item.price;
                        found_at_least_one_item = true;
                    }
                    else
                    {
                        cout << "Insufficient stock for '" << item.name << "'!" << endl;
                    }
                }
                file_out << item.name << " " << item.price << " " << item.stock << endl;
            }

            if (!found)
            {
                cout << "Item not found: '" << item_number << "'" << endl;
            }
        }

        file_in.close();
        file_out.close();

        if (found_at_least_one_item)
        {
            remove("items.txt");
            rename("temp.txt", "items.txt");
            cout << "Purchase successful!" << endl;
            cout << "Total amount: GBP " << fixed << setprecision(2) << total_amount << endl;
        }
        else
        {
            remove("temp.txt");
            cout << "No items purchased." << endl;
        }
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void cashier_login()
{
    User user;
    string input_username, input_password;
    bool loggedIn = false;

    cout << "Enter username: ";
    cin >> input_username;
    cout << "Enter password: ";
    cin >> input_password;

    ifstream file("cashier.txt");
    if (file.is_open())
    {
        while (file >> user.username >> user.password)
        {
            if (input_username == user.username && input_password == user.password)
            {
                loggedIn = true;
                break;
            }
        }
        file.close();
    }

   void sell_items();
    if (loggedIn)
    {
        cout << "Login successful!" << endl;
        int choice;
        do
        {
            cout << "\nCashier Menu:\n" << endl;
            cout << "1. View Item List" << endl;
            cout << "2. Sell items" << endl;
            cout << "3. Log Out" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    display_items();
                    break;
                case 2:
                    sell_items();
                    break;
                case 3:
                    logout();
                    return;              
                case 0:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please select a valid Choice (1, 2, 3, 4 or 5)" << endl;
                    break;
            }
        } while (choice != 0);
    }
    else
    {
        cout << "Login failed!" << endl;
        cashier_login();
    }
}

void sign_up()
{
    string new_username, new_password;
    cout << "\nPlease Enter _ Insted of a SPACE Between Two Names (IF APPLICABLE)\n";
    cout << "Enter new customer's username: ";
    cin >> new_username;
    cout << "Enter new customer's password: ";
    cin >> new_password;

    ofstream file("customers.txt", ios::app);
    if (file.is_open())
    {
        file << new_username << " " << new_password << endl;
        file.close();
        cout << "New customer added successfully!" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void about_us() 
{
    ifstream about_file("about_us.txt"); 

    if (about_file.is_open()) 
    { 
        string line;

        while (getline(about_file, line)) { 
            cout << line << endl;
        }

        about_file.close(); 
    } 
    else 
    {
        cerr << "Unable to open about_us.txt" << endl;
    }

    cout << "Press '1' to go back to the main menu, or '0' to exit: ";
    int choice;
    cin >> choice;

    if (choice == 1) 
    {
        main();
        return;
    } 
    else if (choice == 0) 
    {
        exit(0);
    } 
    else 
    {
        cerr << "Invalid choice. Exiting the program." << endl;
        exit(1);
    }
}

void display_logo() 
{
    ifstream logo_file("logo.txt"); 

    if (logo_file.is_open()) 
    { 
        string line;

        while (getline(logo_file, line)) { 
            cout << line << endl;
        }

        logo_file.close(); 
    } 
    else 
    {
        cerr << "Unable to open logo.txt" << endl;
    }
}