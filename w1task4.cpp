#include <iostream>

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Implicit type casting (integer division)
    int resultWithoutCasting = num1 / num2;
    std::cout << "Result without type casting: " << resultWithoutCasting << std::endl;

    // Explicit type casting (float division)
    float resultWithCasting = static_cast<float>(num1) / num2;
    std::cout << "Result with type casting: " << resultWithCasting << std::endl;

    return 0;
}

