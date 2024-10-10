#include <iostream>
using namespace std;

int main() 

{
  int menu;

  cout << "1:Start"<< endl;
  cout << "2:Load Game" << endl;
  cout << "3:Quit" << endl;
  cin >> menu;


  switch (menu)
    {
    
    case 1:

        cout << "New Game Started";
        break;

    case 2:
       
        cout << "Loading Saved Files...";
        break;

    case 3:
        
        cout << "Program Terminated";
        break;

    default:
        cout << "Invalid option" << endl;
        break;

    return 0;
    }
}