#include <iostream>
using namespace std;

int counter = 0;

void incrementCounter()
{
    counter++;
}

void displayCounter()
{
    cout << counter << endl;
}

int main()
{
    
    displayCounter();
    incrementCounter();
    displayCounter();
    incrementCounter();
    displayCounter();
    incrementCounter();
    displayCounter();
    incrementCounter();
    displayCounter();
    incrementCounter();
    
    return 0;
}
