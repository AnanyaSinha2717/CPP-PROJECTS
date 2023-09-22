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

        while (space != 0) // for spaces
        {
            cout << "  ";
            space--;
        }

        int j = 1;

        while (j <= i) // for first triangle
        {
            cout << j << " ";
            j++;
        }

        int k = i;

        while (k > 1) // for second triangle
        {
            cout << k - 1 << " ";
            k--;
        }
        cout << endl;
        i++;
    }
}