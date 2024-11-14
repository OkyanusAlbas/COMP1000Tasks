#include <iostream>
using namespace std;

int main() 
{
    int nums[] = {32, 18, 19, 4, 54, 68, 43, 434, 12, 4325};
    int size = sizeof(nums) / sizeof(nums[0]); // Automatically calculate the size
    int sum = 0;

    // Calculate the sum of the elements
    for (int i = 0; i < size; i++)
    {
        sum += nums[i]; // shorthand for sum = sum + nums[i];
        cout << i << " = " << nums[i] << "\n";
    }

    // Calculate average after the loop
    double avg = static_cast<double>(sum) / size; // Use double for more precise average

    // Output the results
    cout << "The sum of the elements in the array: " << sum << "\n";
    cout << "The average of the elements in the array: " << avg << "\n";

    return 0;
}
