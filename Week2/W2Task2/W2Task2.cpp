#include<iostream>
using namespace std;
int main() 
{
int num;
cout << "Enter numbers (negative number to quit): ";
cin >> num;
while (num >= 0) {
cout << "You entered: " << num << endl;
cin >> num;
}
return 0;
}