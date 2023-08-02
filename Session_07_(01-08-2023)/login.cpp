#include <iostream>

const int MAX_users = 10;
std::string user_names[MAX_users];
std::string passwords[MAX_users];
int number_of_users = 0;
bool is_login = false;
std::string current_user;
bool initial_registration_done = false;

void login_user(std::string user_name, std::string password);
void register_user(std::string user_name, std::string password);
void setup_users();
void logout_user();

int main()
{
    setup_users();

    int choice;
    while (true)
    {
       
        std::cout << "To login press                : 1" << std::endl;
        std::cout << "To register new user press    : 2" << std::endl;
        std::cout << "To logout press               : 3" << std::endl;
        std::cout << "To exit from the system press : 4" << std::endl;
        std::cout << std::endl;
       
        std::cout << "input your choice: ";
        std::cin >> choice;

        std::string UN, PW;

        switch (choice)
        {
        case 1:
            if (is_login)
            {
                std::cout << "You are already logged in." << std::endl;
            }
            else
            {
                std::string UN, PW;
                std::cout << "Input user name: ";
                std::cin >> UN;
                std::cout << "Input password: ";
                std::cin >> PW;
                login_user(UN, PW);
            }
            break;

        case 2:
            
            std::cout << "Input user name: ";
            std::cin >> UN;
            std::cout << "Input password: ";
            std::cin >> PW;
            register_user(UN, PW);
            break;

        case 3:
            if (is_login)
            {
                logout_user();
                std::cout << "You are logged out successfully." << std::endl;
            }
            else
            {
                std::cout << "You are not logged in." << std::endl;
            }
            break;

        case 4:
            std::cout << "Exiting the system. Goodbye!" << std::endl;
            return 0;

        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }

    }

    return 0;
}

void register_user(std::string user_name, std::string password)
{
     for (int i = 0; i < number_of_users; i++)
    {
        if (user_names[i] == user_name)
        {
            std::cout << "User already exists." << std::endl;
            return;
        }
    }
    
    if (number_of_users >= MAX_users)
    {
        std::cout << "User registration limit reached." << std::endl;
        return;
    }
    else
    {
        user_names[number_of_users] = user_name;
        passwords[number_of_users] = password;
        std::cout << "User registered successfully." << std::endl;
        number_of_users++;
    }
}

void login_user(std::string user_name, std::string password)
{
	for(int i = 0; i < number_of_users; i++)
	{
		if(user_names[i] == user_name && passwords[i] == password)
		{
			is_login = true;
			std::cout << "You are logged in succssfully." << std::endl << std::endl;
			return;
		}
	}
    std::cout << "Invalid username or password." << std::endl << std::endl;
}

void setup_users()
{
    register_user("user1", "pw1");
    register_user("user2", "pw2");
}

void logout_user()
{
    is_login = false;
}
