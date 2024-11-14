#include <iostream>
using namespace std;

int main() 
{
    // Step 1: Declare an array of 5 integers and assign values
    int arr[5] = {10, 20, 30, 40, 50};
  
    // Pointer should point to the first element of the array
    int* ptr = arr; // Change from &arr to arr

    cout << "Original Array Elements:" << endl;

    
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << "\n"; // Pointer arithmetic to access elements
    }

    // Modify each element by incrementing by 2
    for (int i = 0; i < 5; i++) 
    {
        *(ptr + i) += 2; // Increment by 2
    }

    // Step 4: Output the modified array
    cout << "\nModified Array Elements:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << "\n"; // Print modified elements
    }

    return 0;
}
