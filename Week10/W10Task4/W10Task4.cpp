#include <iostream>
#include <string>
using namespace std;

// Base class Account
class Account 
{
public:
    string accountNumber;
    double balance;

    Account(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposited: " << amount << ". New balance: " << balance << endl;
    }
};

// Derived class SavingsAccount
class SavingsAccount : public Account 
{
public:
    double interestRate;

    SavingsAccount(string accNum, double bal, double rate)
        : Account(accNum, bal), interestRate(rate) {}

    void calculateInterest() 
    {
        double interest = balance * (interestRate / 100);
        cout << "Interest on " << accountNumber << ": " << interest << endl;
    }
};

// Class Customer (Composition)
class Customer 
{
public:
    string name;
    SavingsAccount account;  // Composition: Customer has a SavingsAccount

    Customer(string n, SavingsAccount acc) : name(n), account(acc) {}

    void displayCustomerInfo() 
    {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << account.accountNumber << endl;
        cout << "Account Balance: " << account.balance << endl;
    }
};

int main() 
{
    // Create a SavingsAccount object
    SavingsAccount acc("12345", 1000.0, 5.0);  // 5% interest rate

    // Create a Customer object with the SavingsAccount
    Customer customer("Alice", acc);

    // Display customer and account info
    customer.displayCustomerInfo();

    // Calculate and display interest
    customer.account.calculateInterest();

    // Deposit money and update balance
    customer.account.deposit(200.0);

    // Display updated account info
    customer.displayCustomerInfo();

    return 0;
}
