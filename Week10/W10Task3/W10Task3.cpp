#include <iostream>
#include <string>
using namespace std;

// Class Address
class Address 
{
public:
    string street;
    string city;
    string zipCode;

    Address(string st, string c, string z) : street(st), city(c), zipCode(z) {}

    void displayAddress() 
    {
        cout << "Address: " << street << ", " << city << ", " << zipCode << endl;
    }
};

// Class Person (Composition)
class Person 
{
public:
    string name;
    int age;
    Address address;  // Composition: Person has an Address

    // Constructor to initialize Person and Address
    Person(string n, int a, Address addr) : name(n), age(a), address(addr) {}

    void displayInfo() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
        address.displayAddress();
    }
};

int main() 
{
    // Create an Address object
    Address addr("123 Main St", "Springfield", "12345");

    // Create a Person object with the Address object as a member
    Person person("John Doe", 30, addr);

    // Display Person info including Address
    person.displayInfo();

    return 0;
}
