#include <iostream>
#include <cmath>

using namespace std;

double cube(double num)
{
    return num * num * num;
}

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double answer = cube(num);
    cout << answer << endl;

    return 0;
}