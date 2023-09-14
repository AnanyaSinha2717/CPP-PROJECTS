// 1 1 1    (n = 3)
// 2 2 2
// 3 3 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int i = 1;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    while (i <= n) // creating columns
    {
        int j = 1;
        while (j <= n) // creating a row
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}