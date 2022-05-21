#include <iostream>
#include <cmath>
using namespace std;

constexpr double getPi() { return std::atan(1) * 4; }
constexpr double pi = getPi();

double areaCircle(double radius)
{
    return pi * radius * radius;
}

double circumferenceCircle(double radius)
{
    return 2 * pi * radius;
}

int main()
{
    double radius;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaCircle(radius) << endl;
    cout << "Circumference of circle: " << circumferenceCircle(radius) << endl;

    return 0;
}
