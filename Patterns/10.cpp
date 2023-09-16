// square matrix of alphabets with alphabets succeeding in a row
// ASCII 65 - 90 for A - Z

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
        int j = 1;
        char value = 'A';
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