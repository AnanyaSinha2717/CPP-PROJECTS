#include <iostream>
#include <cmath>

using namespace std;

// after 31! it will go out of range
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
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int answer = factorial(a);
    cout << a << "!"
         << " = " << answer << endl;

    return 0;
}