#include <iostream>
using namespace std;

void printArray(double arr[], int length) {
    for (int i = 0; i < length; i++)
        cout << arr[i] << endl;
}

int main()
{
    double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArray(arr, 5);
    return 0;
}