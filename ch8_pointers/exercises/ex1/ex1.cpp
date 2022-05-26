#include <iostream>
using namespace std;

int main()
{
    int number = 3;
    int* pNum1 = &number;
    *pNum1 = 20;
    int* pNum2 = pNum1;

    number *= 2;
    cout << *pNum2; // returns 40

    return 0;

}