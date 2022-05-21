#include <iostream>
using namespace std;

// global vars
bool globalBool = true;
long int globalInt = 100000123;

int main()
{ 
    cout << globalBool << " --> address: " << &globalBool << endl;
    cout << globalInt << " --> address: " << &globalInt << endl;
    cout << "Size of globalInt (in bytes): " << sizeof(globalInt) << endl;
    return 0;
}