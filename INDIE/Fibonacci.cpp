#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the last position n: ";
    cin >> n;
    cout << "0" << endl;
    cout << "1" << endl;

    int sum = 0;
    int a = 0, b = 1;

    for (int i = 0; i <= n - 3; i++)
    {
        sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
    }
}