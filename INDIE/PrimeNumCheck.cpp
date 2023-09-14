#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int i = 2;

    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "Not prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i++;
    }
}