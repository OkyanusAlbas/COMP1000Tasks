#include <iostream>
using namespace std;

int main() 
{
    // Without parentheses
    int resultWithoutParentheses = 5 + 3 * 2 / 4 - 1;
    cout << "Result without parentheses: " << resultWithoutParentheses << endl;

    // With parentheses
    float resultWithParentheses = (5 + 3) * (2 / (4 - 1));
    cout << "Result with parentheses: " << resultWithParentheses << endl;

    return 0;
}

