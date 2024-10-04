#include <iostream>
#include <string>
using namespace std;


int main() {
    // Declare and initialize variables
    int age = 20;
    float height = 1.65;
    char grade = 'B';
    std::string name = "Alice";

    // Display initial values
    std::cout << "Initial values:" << std::endl;
    std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << ", Grade: " << grade << std::endl;

    // Update variables
    name = "Bob";
    age = 22;
    height = 1.75;
    grade = 'A';

    // Display updated values
    std::cout << "Updated values:" << std::endl;
    std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << ", Grade: " << grade << std::endl;

    return 0;
}

