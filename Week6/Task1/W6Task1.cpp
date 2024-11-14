#include <iostream>   // Includes the iostream library for input and output operations
#include <fstream>    // Includes the fstream library to work with file streams
#include <iomanip>    // Includes the iomanip library for manipulating output formats

using namespace std; // Allows direct access to standard library objects and functions without the std:: prefix

int main() 
{
    // Create an ofstream object to handle file output
    ofstream outFile("data.txt");  // Opens a file named "data.txt" for writing

    // Check if the file opened successfully
    if (!outFile.is_open()) 
    { // If the file did not open, is_open() returns false
        cerr << "Error opening file!" << endl; // Print error message to standard error
        return 1; // Exit the program with an error code of 1
    }

    // Declare and initialize different types of data
    int intValue = 42;               // Integer variable initialized to 42
    float floatValue = 3.14159;      // Float variable initialized to the value of pi
    string stringValue = "Hello, World!"; // String variable initialized with a greeting

    // Write the integer to the file with formatting
    outFile << setw(10) << "Integer:" << intValue << endl; 
    // setw(10): Sets the width of the output field to 10 characters for alignment

    // Write the float to the file with formatting (2 decimal places)
    outFile << setw(10) << "Float:" << fixed << setprecision(2) << floatValue << endl; 
    // fixed: Ensures the float is printed in fixed-point notation
    // setprecision(2): Limits the float output to 2 decimal places

    // Write the string to the file
    outFile << setw(10) << "String:" << stringValue << endl; 
    // The string will also be aligned to the width of 10 characters

    // Close the file to free resources
    outFile.close(); // Closes the file stream and saves the data

    // Inform the user that the data was written successfully
    cout << "Data written to file successfully." << endl; // Print success message

    return 0; // Return 0 to indicate successful completion of the program
}




