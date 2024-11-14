#include <iostream>
using namespace std;

class Counter
{
    private:
        static int count;  // Static variable to keep track of the number of Counter objects

    public:
        // Constructor: increments the count when an object is created
        Counter() 
        {
            count++;
            cout << "Current Count: " << count << endl;
        }

        // Destructor: decrements the count when an object is destroyed
        ~Counter() 
        {
            count--;
            cout << "Current Count: " << count << endl;
        }

        // Static method to return the current count value
        static int getCount() 
        {
            return count;
        }
};

// Define and initialize the static member variable count
int Counter::count = 0;

int main()
{
    cout << "Creating first object:" << endl;
    Counter c1;  // Count becomes 1

    cout << "Creating second object:" << endl;
    Counter c2;  // Count becomes 2

    cout << "Creating third object:" << endl;
    Counter c3;  // Count becomes 3

    cout << "Deleting second object:" << endl;
    // When c2 goes out of scope, count becomes 2

    return 0;
}
