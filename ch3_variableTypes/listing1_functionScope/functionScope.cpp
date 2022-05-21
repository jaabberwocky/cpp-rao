#include <iostream>
using namespace std;

// initial function declaration
int addTwoNumbers(int x, int y);

int main()
{
    long int num1, num2;

    num1 = 4;
    num2 = 5;

    int result = addTwoNumbers(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}

// actual function implementation
int addTwoNumbers(int x, int y)
{
    return x + y;
}