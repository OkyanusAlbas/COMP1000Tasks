#include <iostream>
#include <string>
using namespace std;

void swapNumbers(int &a, int &b) 
{
    int c = a;
    a = b;
    b = c;
}

int main() 
{
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << endl << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNumbers(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << endl << secondNum << "\n";

  return 0;
}
