
#include <iostream>
#include <string>
using namespace std;

class Student
{        
  private:
        string name;
        int age;
        char grade;

  public:
        // Constructor to initialize attributes
        Student(string n, int a, char g) 
        {
            name = n;
            age = a;
            grade = g;
        }

        // Setter methods
        void setName(string n) 
        {
            name = n;
        }

        void setAge(int a) 
        {
            age = a;
        }

        void setGrade(char g) 
        {
            grade = g;
        }

        // Getter methods
        string getName() 
        {
            return name;
        }

        int getAge() 
        {
            return age;
        }

        char getGrade() 
        {
            return grade;
        }

        // Method to display student details
        void displayInfo() 
        {
            cout << "Student Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Grade: " << getGrade() << endl;
        }
};

int main() 
{
    // Create an object of Student
    Student myObj("Alice", 20, 'A');

    // Use getter methods to display the student details
    myObj.displayInfo();

    // Alternatively, you can set values using setter methods:
    // myObj.setName("Bob");
    // myObj.setAge(22);
    // myObj.setGrade('B');
    // myObj.displayInfo();

    return 0;
}
