#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 1;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        int space = n - i;
        int j = 1;

        while (space)
        {
            cout << "  ";
            space--;
        }
        while (j <= i)
        {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }
}