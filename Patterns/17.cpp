#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    double stop = 0;

    while (i <= n)
    {
        if (n % 2 == 0) // n is even
        {
            double stop = n / 2;
        }
        else // n is odd
        {
            double stop = n / 2 + 1 / 2;
        }

        int j = 1;
        int space = i - 1;

        while (space != 0)
        {
            cout << "  ";
            space--;
            j++;
            if (space+1 == stop)
            {
                i > n;
            }
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