#include <iostream>
#include <cmath>

using namespace std;

int sqrtInt(int x)
{
    int s = 0, e = x;
    long long int ans = -1;

    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        if (mid * mid == x)
        {
            ans = mid;
            break;
        }

        else if (mid * mid < x)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (mid * mid > x)
        {
            e = mid - 1;
        }
    }
    return ans;
}

double decimal(int x, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j * j < x; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int pre;
    cout << "Till how many decimal points: ";
    cin >> pre;

    int tempSol = sqrtInt(x);
    cout << "Sqrt is = " << decimal(x, pre, tempSol) << endl;

    return 0;
}