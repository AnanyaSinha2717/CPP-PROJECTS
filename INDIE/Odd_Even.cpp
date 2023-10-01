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
    cout << "Enter a number: ";
    cin >> a;
    if (isEven(a))
    {
        cout << a << " is Even" << endl;
    }
    else
    {
        cout << a << " is Odd" << endl;
    }
    return 0;
}