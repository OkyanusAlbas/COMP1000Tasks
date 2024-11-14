#include <iostream>
#include <string>
using namespace std;


int main() 
{
    // Declare and initialize variables
    int age = 20;
    float height = 1.65;
    char grade = 'B';
    string name = "Alice";

    // Display initial values
    cout << "Initial values:" << endl;
    cout << "Name: " << name << ", Age: " << age << ", Height: " << height << ", Grade: " << grade << endl;

    // Update variables
    name = "Bob";
    age = 22;
    height = 1.75;
    grade = 'A';

    // Display updated values
    cout << "Updated values:" << endl;
    cout << "Name: " << name << ", Age: " << age << ", Height: " << height << ", Grade: " << grade << endl;

    return 0;
}

