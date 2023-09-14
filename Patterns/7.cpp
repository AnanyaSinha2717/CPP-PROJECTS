// 1
// 2 3
// 4 5 6      (n = 3)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int i = 1;
    int j = 1;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    while (i <= n)
    {
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
