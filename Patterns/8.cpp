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
        while (j < i * 2)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}