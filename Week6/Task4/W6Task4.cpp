#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to open a file and perform operations
void handleFileOperations(const string& filename) 
{
    // Open the file for writing
    ofstream outFile(filename);
    if (!outFile) 
    {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    // Write some data to the file
    outFile << "Hello, World!" << endl;
    outFile << "This is a test file." << endl;

    // Check for errors
    if (outFile.fail()) 
    {
        cerr << "Write operation failed!" << endl;
        outFile.clear(); // Clear error state
        outFile.close();
        return;
    }

    // Close the output file
    outFile.close();

    // Open the file for reading
    ifstream inFile(filename);
    if (!inFile) 
    {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    string line;
    // Read data from the file
    while (getline(inFile, line)) 
    {
        // Check for end of file
        if (inFile.eof()) 
        {
            cout << "Reached end of file." << endl;
            break;
        }
        // Check for read errors
        if (inFile.fail()) 
        {
            cerr << "Read operation failed!" << endl;
            inFile.clear(); // Clear error state
            break; // Exit loop
        }
        cout << "Read line: " << line << endl;
    }

    // Close the input file
    inFile.close();
}

int main() 
{
    const string filename = "testfile.txt";
    handleFileOperations(filename);
    return 0;
}
