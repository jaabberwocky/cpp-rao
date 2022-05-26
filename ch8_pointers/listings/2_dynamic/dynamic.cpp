#include <iostream>
using namespace std;

int main()
{
    int numEntries = 0;

    cout << "Enter space requested: ";
    cin >> numEntries;

    int *numbers = new int[numEntries];
    int staticNumbers[numEntries] = {};

    cout << "Memory allocated at 0x" << numbers << hex << endl;
    cout << "Size of dynamic: " << sizeof(numbers) << endl;
    cout << "Size of static: " << sizeof(staticNumbers) << endl;
    delete[] numbers;

    return 0;
}