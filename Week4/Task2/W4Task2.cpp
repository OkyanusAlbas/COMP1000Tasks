#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string str1 = "Hello, ";
    string str2 = "World";

    string combinedStr = str1 + str2;

    int length = combinedStr.length();

    cout << "Combined String: " << combinedStr << "\n";
    cout << "Length of the concatenated string: " << length << "\n";


     // Step 4: Compare the original strings and output whether they are equal or not
    if (str1 == str2)
    {
        cout << "The original strings are equal.\n";
    } else {
        cout << "The original strings are not equal.\n";
    }

    return 0;   
}


