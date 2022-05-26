#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    const double Pi = 3.1416;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Integer age is located at: 0x" << &age << endl;
    cout << "Double Pi is located at: 0x" << &Pi << endl;

    // accessing array values
    int* p0 = &arr[0];
    int* p1 = p0 + 1;

    cout << "Memory address of first array member (p0): 0x" << p0 << endl;
    cout << "Address at p1: " << p1 << endl;
    cout << "Value at p1: " << *p1 << endl;

    // loop through array using pointer
    for (int i = 0; i < 5; i++)
        cout << "Address" << p0 + i << " with value: " << *(p0 + i) << endl;

    return 0;
}