#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

double volume(double radius);
double volume(double radius, double height);

const double pi = M_PI;

int main()
{
    double radius, height;
    string confirmation;
    bool heightProvided = false;

    cout << "Enter radius: ";
    cin >> radius;

    while (true) {
        cout << "Do you wish to enter height? (y/n) ";
        cin >> confirmation;

        if (confirmation == "y") {
            cout << "Enter height: ";
            cin >> height;
            heightProvided = true;
            break;
        } else if (confirmation == "n") {
            break;
        } else {
            // input not understood
            cout << "Please enter 'y' or 'n'!" << endl;
        }
    }

    if (heightProvided) {
        cout << "Volume of cylinder: " << volume(radius, height) << endl;
    } else {
        cout << "Volume of sphere: " << volume(radius) << endl;
    }

    return 0;
}

double volume(double radius) {
    // vol of sphere
    return 4 * pi * radius * radius * radius / 3;
}

double volume(double radius, double height) {
    // vol of cylinder
    return pi * radius * radius * height;
}