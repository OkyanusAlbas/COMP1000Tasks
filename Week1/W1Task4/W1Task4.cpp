#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    // Input two integers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Implicit type casting (integer division)
    int resultWithoutCasting = num1 / num2;
    cout << "Result without type casting: " << resultWithoutCasting << endl;

    // Explicit type casting (float division)
    float resultWithCasting = static_cast<float>(num1) / num2;
    cout << "Result with type casting: " << resultWithCasting << endl;

    return 0;
}

