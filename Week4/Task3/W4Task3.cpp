#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1 = 2133;
    int* ptr = &num1; // Pointer that stores the address of num1

    // Output the value of num1 (2133)
    cout << num1 << "\n";

    // Output the memory address of num1 (0x16fdff298)
    cout << &num1 << "\n";

    // Output the memory address of num1 with the pointer (0x16fdff298)
    cout << ptr << "\n";


    // Change the value of the pointer
    *ptr = 23;

    // Output the new value of the pointer (23)
    cout << *ptr << "\n";

    // Output the new value of the num1 variable (23)
    cout << num1 << "\n";

    return 0;
}
