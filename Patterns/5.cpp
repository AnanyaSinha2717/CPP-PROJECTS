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
        while (j <= n * i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}