#include <iostream>
using namespace std;

// Base class Animal
class Animal 
{
public:
    virtual void speak() = 0;  // Pure virtual function
};

// Derived class Dog
class Dog : public Animal 
{
public:
    void speak() override 
    {
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal 
{
public:
    void speak() override 
    {
        cout << "Meow! Meow!" << endl;
    }
};

int main() 
{
    // Create instances of Dog and Cat
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    // Call the speak method (demonstrates polymorphism)
    dog->speak();
    cat->speak();

    // Clean up
    delete dog;
    delete cat;

    return 0;
}
