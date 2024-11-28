#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle 
{
public:
    string make;
    string model;

    // Constructor to initialize make and model
    Vehicle(string m, string mod) : make(m), model(mod) {}

    // Virtual function to display vehicle info
    virtual void displayInfo() 
    {
        cout << "Make: " << make << ", Model: " << model << endl;
    }
};

// Derived class Car
class Car : public Vehicle 
{
public:
    int numberOfDoors;

    // Constructor to initialize base class and numberOfDoors
    Car(string m, string mod, int doors) : Vehicle(m, mod), numberOfDoors(doors) {}

    // Override the displayInfo method to include numberOfDoors
    void displayInfo() override {
        cout << "Car Make: " << make << ", Model: " << model << ", Number of Doors: " << numberOfDoors << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle 
{
public:
    bool hasCarrier;

    // Constructor to initialize base class and hasCarrier
    Bike(string m, string mod, bool carrier) : Vehicle(m, mod), hasCarrier(carrier) {}

    // Override the displayInfo method to include hasCarrier
    void displayInfo() override 
    {
        cout << "Bike Make: " << make << ", Model: " << model << ", Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }
};

int main() 
{
    // Create instances of Car and Bike
    Vehicle* car = new Car("Toyota", "Corolla", 4);
    Vehicle* bike = new Bike("Yamaha", "FZ", true);

    // Display info using base class pointers (polymorphism)
    car->displayInfo();
    bike->displayInfo();

    // Clean up dynamically allocated memory
    delete car;
    delete bike;

    return 0;
}
