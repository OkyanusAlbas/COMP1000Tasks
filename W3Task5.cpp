#include <iostream>
using namespace std;



int main()
{
    int temp;

    cout << "What is the Temperature ?" << endl;
    cin >> temp;



        if (temp > 0)
        {
            if(temp > 16)
            {
                if(temp > 30)
                {
                    cout << "It's Hot" << endl;
                }

                else 
                {
                    cout << "It's Warm" << endl;
                }
            }

            else 
            {
                cout << "It's cold" << endl;    
            }         
        }
            
        else 
        {
            cout << " Its freezing" << endl;
        }
        

    


    return 0;
}

