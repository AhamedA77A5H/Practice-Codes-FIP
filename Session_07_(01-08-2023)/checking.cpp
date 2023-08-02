#include <iostream>
// Implement a bank account class
// deposit, withdraw, displayBalance methods

double balance = 500;

void deposit(double amount);
void withdrawal(double amount);
void display();

int main()
{
    double amount;

    std::cout << "Input the amount to deposit: ";
    std::cin >> amount;
    deposit(amount);

    std::cout << "Input the amount to withdraw: ";
    std::cin >> amount;
    withdrawal(amount);

    display();

    return 0;
}

void deposit(double amount)
{
    balance += amount;
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
}

void display()
{
    std::cout << std::endl << "Current balance is " << balance << std::endl;
}
