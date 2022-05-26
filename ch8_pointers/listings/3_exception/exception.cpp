#include <iostream>
#include <climits>
using namespace std;

int main()
{
    try
    {
        // request a ton of memory
        int *manyNums = new int[UINT_MAX + INT_MAX];
        delete[] manyNums;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed, ending..." << endl;
        return 1;
    }
    return 0;
}