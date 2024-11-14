#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ifstream file("application.log");  // Open the log file
    string line;
    int error_count = 0;
    int warning_count = 0;

    if (!file.is_open()) 
    {
        cerr << "Could not open the log file!" << std::endl;
        return 1;
    }

    while (getline(file, line)) 
    {
        if (line.find("ERROR") != string::npos) 
        {
            error_count++;
            cout << line << endl;
        }
        if (line.find("WARNING") != string::npos) 
        {
            warning_count++;
            cout << line << endl;
        }
    }

    cout << "Total ERRORS: " << error_count << endl;
    cout << "Total WARNINGS: " << warning_count << endl;

    file.close();
    return 0;
}
