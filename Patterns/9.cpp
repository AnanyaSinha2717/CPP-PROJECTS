// 1
// 2 1
// 3 2 1     (n = 3)

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

    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}