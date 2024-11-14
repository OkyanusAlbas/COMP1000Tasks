#include <iostream>
using namespace std;

void trackFunctionCalls()
{
    static int s_value = 1; // Static variable, initialized only once
    ++s_value;
    cout << "Function call count: " << s_value << endl; // Output the current count
}

int main()
{
    // Call the function multiple times to see the effect of the static variable
    trackFunctionCalls(); // Call 1
    trackFunctionCalls(); // Call 2
    trackFunctionCalls(); // Call 3

    return 0;
}
