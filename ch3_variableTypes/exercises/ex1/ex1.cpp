#include <iostream>
using namespace std;

int main()
{
    enum YourCards {Ace = 43, Jack, Queen, King};
    YourCards myCard = Queen;
    cout << "myCard: " << myCard << endl;
    return 0;
}