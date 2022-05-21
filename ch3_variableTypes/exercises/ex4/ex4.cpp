#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;

constexpr double getPi() { return std::atan(1) * 4; }
constexpr double pi = getPi();

tuple<int, int> getWholeDecimal(double num)
{
    double whole = floor(num);
    int decimal = round((num - whole) * 100);
    
    return {whole, decimal};
}

tuple<int, int> areaCircle(double radius)
{
    double trueArea = pi * radius * radius;
    auto [whole, decimal] = getWholeDecimal(trueArea);

    return {whole, decimal};
}

tuple<int, int> circumferenceCircle(double radius)
{
    double trueCircum =  2 * pi * radius;
    auto [whole, decimal] = getWholeDecimal(trueCircum);

    return {whole, decimal};
}

int main()
{
    double radius;

    cout << "Enter radius of circle: ";
    cin >> radius;
    
    auto [w_area, d_area] = areaCircle(radius);
    auto [w_circum, d_circum] = circumferenceCircle(radius);
    cout << "Area of circle: " << w_area << "." << d_area << endl;
    cout << "Circumference of circle: " << w_circum << "." << d_circum << endl;

    return 0;
}
