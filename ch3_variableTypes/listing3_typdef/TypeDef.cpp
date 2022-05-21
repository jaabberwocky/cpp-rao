#include <iostream>
using namespace std;

typedef bool BIG_BOOL;

int main()
{
    BIG_BOOL b = true;
    cout << "Type (" << typeid(BIG_BOOL).name() << "): " << b << endl;
    return 0;
}