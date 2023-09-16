// 1
// 2 3
// 3 4 5
// 4 5 6 7      (n = 4)

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
        int k = i;
        int j = 1;
        while (j <= i)
        {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}
