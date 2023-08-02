#include <iostream>

double balance = 500;

void deposit(double amount);
void withdrawal(double amount);
void display();

int main()
{
    while (true)
    {
        int choice;

        std::cout << "********** Welcome to the Bank **********\n\n";
        std::cout << "To check balance press  : 1 \n";
        std::cout << "To deposit money press  : 2 \n";
        std::cout << "To withdraw money press : 3 \n";
        std::cout << "To exit press           : 4 \n";
        std::cout << "Input your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "To check the balance" << std::endl;
            display();
            break;
        case 2:
            double amount;
            std::cout << "Input the amount to deposit: ";
            std::cin >> amount;
            deposit(amount);
            break;
        case 3:
            std::cout << "Input the amount to withdraw: ";
            std::cin >> amount;
            withdrawal(amount);
            break;
        case 4:
            std::cout << "......Thank you......." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}

void deposit(double amount)
{
    balance += amount;
    std::cout << std::endl << std::endl;
}

void withdrawal(double amount)
{
    if (balance < amount)
    {
        std::cout << "Sorry, insufficient funds. Cannot withdraw cash." << std::endl;
    }
    else
    {
        balance -= amount;
    }
    std::cout << std::endl << std::endl;
}

void display()
{
    std::cout << "Current balance is " << balance << std::endl << std::endl << std::endl;
}
