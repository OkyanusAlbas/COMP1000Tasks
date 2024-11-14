#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    // Open the source file for reading
    ifstream sourceFile("source.txt");
    // Open the destination file for writing
    ofstream destFile("destination.txt");

    // Check if the source file opened successfully
    if (!sourceFile) 
    {
        cerr << "Error opening source file!" << endl;
        return 1; // Exit with an error code
    }

    // Check if the destination file opened successfully
    if (!destFile) 
    {
        cerr << "Error opening destination file!" << endl;
        sourceFile.close();
        return 1; // Exit with an error code
    }

    char ch;
    
    // Copy content from source to destination one character at a time
    while (sourceFile.get(ch)) 
    {
        destFile.put(ch);
    }

    // Close both files
    sourceFile.close();
    destFile.close();

    cout << "File copied successfully!" << endl;

    return 0; // Successful execution
}
