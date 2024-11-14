#include <iostream>
#include <string>
using namespace std;

class Book 
{        
  private:
        string title;
        string author;
        float price;

  public:
        // Constructor to initialize attributes
        Book(string t, string a, float p) 
        {
            title = t;
            author = a;
            price = p;
        }

        // Method to display book details
        void displayInfo() 
        {
            cout << "Title: " << title << ", Author: " << author << ", Price: " << price << endl;
        }
};

int main() 
{
    // Create an object of Book and initialize it with values
    Book myObj("The C++ Programming Language", "Bjarne Stroustrup", 39.99);

    // Call the displayInfo method
    myObj.displayInfo(); 

    return 0;
}
