#include <iostream>
#include <cmath>
using namespace std;

void calculateDistance(float x1, float y1, float x2, float y2)
{
    float x = (x2 - x1);
    float squareX = pow(x, 2);
    float y = (y2 - y1);
    float squareY = pow(y, 2);
    float distance = sqrt(squareX + squareY);
    cout << "Distance: " << distance << endl;
}

int main() 
{
    float x1, y1, x2, y2;

    cout << "Enter coordinates for x1: ";
    cin >> x1;
    cout << "Enter coordinates for y1: ";
    cin >> y1;
    cout << "Enter coordinates for x2: ";
    cin >> x2;
    cout << "Enter coordinates for y2: ";
    cin >> y2;

    calculateDistance(x1, y1, x2, y2);

    return 0;
}
