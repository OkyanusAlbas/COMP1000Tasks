#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string make;
        int year;

    public:
        // Default constructor
        Car() 
        {
            make = "Unknown";
            year = 0;
            cout << "Default constructor called!" << endl;  // Optional: to show the constructor is called
        }

        // Parameterized constructor
        Car(string m, int y) 
        {
            make = m;
            year = y;
            cout << "Parameterized constructor called!" << endl;  // Optional: to show the constructor is called
        }

        // Destructor
        ~Car() 
        {
            cout << "Car object is being destroyed!" << endl;
        }

        // Getter methods
        string getMake() 
        {
            return make;
        }

        int getYear() 
        {
            return year;
        }

        // Method to display car details
        void displayInfo() 
        {
            cout << "Car Make: " << getMake() << ", Year: " << getYear() << endl;
        }
};

int main()
{
    // Create an object using the default constructor
    Car carObj1;
    carObj1.displayInfo();

    // Create an object using the parameterized constructor
    Car carObj2("Toyota", 2021);
    carObj2.displayInfo();

    // Destruction messages will be printed when objects go out of scope
    return 0;
}
