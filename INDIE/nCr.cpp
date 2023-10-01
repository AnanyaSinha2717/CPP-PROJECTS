#include <iostream>
#include <cmath>

using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int n, r;
    cout << "n = ";
    cin >> n;
    cout << "r = ";
    cin >> r;

    int nf = factorial(n);
    int rf = factorial(r);
    int nrf = factorial(n - r);
    int ans = nf / (rf * nrf);
    cout << n << "C" << r << " = " << ans << endl;

    return 0;
}