#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) // not prime
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (isPrime(a))
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "Not a Prime number" << endl;
    }
    return 0;
}