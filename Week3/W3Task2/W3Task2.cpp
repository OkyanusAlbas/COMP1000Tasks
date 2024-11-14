#include <iostream>
using namespace std;


int main ()
{



int mark;
cout << "Enter Your Grade: " << endl;
cin >> mark;

if (mark < 60)
{
    cout << "Your grade is F" << endl;
}

else if (mark >= 60 and mark < 70)

{
    cout << "Your grade is D" << endl;
}

else if (mark >= 70 and mark < 80)
{
    cout << "Your grade is C" << endl;
}

else if (mark >= 80 and mark < 90)
{
    cout << "Your grade is B" << endl;
}

else if (mark >= 90)
{
    cout << "Your grade is A" << endl;
}


    return 0;
}
