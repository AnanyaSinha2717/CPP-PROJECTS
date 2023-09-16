#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int i = 1;
    char value = 65;

    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}