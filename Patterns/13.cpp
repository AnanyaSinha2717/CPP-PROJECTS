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
        char start = 'A' + n - i;
        while (j <= i)
        {
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}