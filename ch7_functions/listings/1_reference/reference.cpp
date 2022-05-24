#include <iostream>
using namespace std;

// function prototype
void incrementValue(int &num)
{
    // int& num indicates that we are passing by REFERENCE, not by VALUE
    num = num + 1;
}

int main()
{
    int x = 4, y = 0;

    cout << "x: " << x << " y:" << y << endl;
    cout << "------------------------" << endl;
    incrementValue(y);
    cout << "x: " << x << " y:" << y << endl;
    
    return 0;
}