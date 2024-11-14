#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int num1, num2;

    // Input two integers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = static_cast<float>(num1) / num2; // Type casting for float division
    int remainder = num1 % num2;

    // Display the results
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    cout << "Division: " << quotient << endl;
    cout << "Modulus: " << remainder << endl;

    return 0;
}
