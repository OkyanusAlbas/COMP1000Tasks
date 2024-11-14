#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() 
{
    ifstream file("data.csv");  // Open the CSV file
    string line;

    if (!file.is_open()) 
    {
        cerr << "Could not open the file!" << endl;
        return 1;
    }

    while (getline(file, line)) 
    {
        stringstream ss(line);
        string name, age, city;

        // Use getline to extract each field based on commas
        getline(ss, name, ',');
        getline(ss, age, ',');
        getline(ss, city, ',');

        // Output the formatted result
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }

    file.close();
    return 0;
}