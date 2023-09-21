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
        int j = 1;
        int space = i - 1;
        while (space != 0)
        {
            cout << "  ";
            space--;
        }
        while (j <= n - i + 1)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}