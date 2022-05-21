#include <iostream>
using namespace std;

template <class T>
void printSize(T t, char id);

int main()
{
    unsigned int a = 45;
    int b = 45;
    long int c = 45;

    printSize(a, 'a');
    printSize(b, 'b');
    printSize(c, 'c');
}

template <class T>
void printSize(T t, char id)
{
    cout << "size (" << id << "): " << sizeof(t) << endl;
}