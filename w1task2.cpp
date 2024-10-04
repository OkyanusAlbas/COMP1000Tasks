#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = static_cast<float>(num1) / num2; // Type casting for float division
    int remainder = num1 % num2;

    // Display the results
    std::cout << "Addition: " << sum << std::endl;
    std::cout << "Subtraction: " << difference << std::endl;
    std::cout << "Multiplication: " << product << std::endl;
    std::cout << "Division: " << quotient << std::endl;
    std::cout << "Modulus: " << remainder << std::endl;

    return 0;
}
