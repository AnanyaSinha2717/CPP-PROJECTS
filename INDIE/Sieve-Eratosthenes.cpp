#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    bool prime[n];
    memset(prime, true, sizeof(prime)); // set all elements of array to true
    int count = 0;

    for (long long i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (long long j = i * i; j < n; j += i)
            {
                if (j % i == 0)
                    prime[j] = false;
            }
        }
    }

    cout << "Number of primes strictly less than " << n << " = " << count << '\n';
    return 0;
}