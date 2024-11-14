#include <iostream>
using namespace std;

// Global variable
int globalVar = 0;

void demoFunction() 
{
    // Local variable
    int localVar = 0;

    // Static variable
    static int staticVar = 0;

    // Increment all variables
    localVar++;
    staticVar++;
    globalVar++;

    // Display the values
    cout << "Local: " << localVar << ", Static: " << staticVar << ", Global: " << globalVar << endl;
}

int main() 
{
    // Call the function multiple times
    demoFunction();
    demoFunction();
    demoFunction();

    return 0;
}

