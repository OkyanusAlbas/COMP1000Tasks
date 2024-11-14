#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    // Create an input file stream
    ifstream inputFile("data copy.txt");

    // Check if the file opened successfully
    if (!inputFile) 
    {
        cerr << "Error opening file!" << endl;
        return 1; // Exit with an error code
    }

    // Variables to store data
    int intValue;
    float floatValue;
    string stringValue;
    string line;

    // Read and display integers
    cout << "Reading integers:" << endl;
    while (inputFile >> intValue) 
    {
        cout << "Integer: " << intValue << endl;
    }

    // Clear the EOF flag to read the next data type
    inputFile.clear();
    inputFile.seekg(0); // Go back to the beginning of the file

    // Read and display floating-point numbers
    cout << "\nReading floating-point numbers:" << endl;
    while (inputFile >> floatValue) 
    {
        cout << "Float: " << floatValue << endl;
    }

    // Clear the EOF flag again
    inputFile.clear();
    inputFile.seekg(0); // Go back to the beginning of the file

    // Read and display strings
    cout << "\nReading strings:" << endl;
    while (inputFile >> stringValue) 
    {
        cout << "String: " << stringValue << endl;
    }

    // Clear the EOF flag again
    inputFile.clear();
    inputFile.seekg(0); // Go back to the beginning of the file

    // Read and display whole lines
    cout << "\nReading whole lines:" << endl;
    while (getline(inputFile, line)) 
    {
        cout << "Line: " << line << endl;
    }

    // Close the file
    inputFile.close();

    return 0; // Successful execution
}
