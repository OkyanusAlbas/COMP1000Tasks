#include <iostream>
using namespace std;

int main() 

{
  float num1, num2, add, sub, mult, div;
  int operation;

  cout << "Enter num1: "<< endl;
  cin >> num1;
  cout << "Enter num2" << endl;
  cin >> num2;
  cout << "Choose a Opertion 1 to 4 1:Addition, 2:Substraction, 3:Multiplation, 4:Division: ";
  cin >> operation;

  switch (operation) 
    {
    
    case 1:
        add = num1 + num2;
        cout << add;
        break;
    case 2:
        sub = num1 - num2;
        cout << sub;
        break;
    case 3:
        mult = num1 * num2;
        cout << mult;
        break;
    case 4:
        div = num1 / num2;
        cout << div;
        break;

    default:
        cout << "Does not Exist" << endl;
        break;

    return 0;
    }
}