#include <iostream>
#include <math.h>
using namespace std;

const double pi = M_PI;

void calcAreaCircum(double radius, double &area, double &circum)
{
    // assign using reference
    area = pi * radius * radius;
    circum = 2 * pi * radius;
}

int main()
{
    double radius, area, circum;

    cout << "Enter radius: ";
    cin >> radius;

    calcAreaCircum(radius, area, circum);
    cout << "Area: " << area << " || Circumference: " << circum << endl;
    return 0;
}