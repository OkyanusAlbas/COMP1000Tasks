#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() 
{
    ifstream file("data.txt");  // Open the text file
    string line;

    if (!file.is_open()) 
    {
        cerr << "Could not open the file!" << endl;
        return 1;
    }

    while (getline(file, line)) 
    {
        // Remove braces and split the line into key-value pairs
        size_t name_pos = line.find("name:") + 6;  // Start of the name value
        size_t grades_pos = line.find("grades:") + 8;  // Start of the grades value
        
        string name = line.substr(name_pos, line.find(",", name_pos) - name_pos);
        string grades = line.substr(grades_pos);

        // Output the name and grades
        cout << "Name: " << name << ", Grades: " << grades << std::endl;
    }

    file.close();
    return 0;
}
