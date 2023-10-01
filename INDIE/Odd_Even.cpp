#include <iostream>
#include <cmath>

using namespace std;

// return 1 -> even
// return 0 -> odd
bool isEven(int num)
{
    // odd
    if (num & 1)
    {
        return 0;
    } // even
    else
    {
        return 1;
    }
}

int main()
{
    int a;
    cout << "Enter the number you want to check: ";
    cin >> a;
    int check = isEven(a);
    cout << check << endl;
    return 0;
}