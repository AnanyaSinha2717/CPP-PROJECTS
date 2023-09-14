// 3 2 1   (n = 3)
// 3 2 1
// 3 2 1

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
        int j = n;
        while (j != 0) // creating a row
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}