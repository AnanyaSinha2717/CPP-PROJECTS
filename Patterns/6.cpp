// asterik equilateral triangle
// *
// * *
// * * *   (n = 3)

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
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}