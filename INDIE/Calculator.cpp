#include <iostream>
#include <cmath>

using namespace std;

int sum(long double num1, long double num2)
{
    long double result;
    result = num1 + num2;
    return result;
}

int subtract(long double num1, long double num2)
{
    long double result;
    result = num1 - num2;
    return result;
}

int multiply(long double num1, long double num2)
{
    long double result;
    result = num1 * num2;
    return result;
}

int divide(long double num1, long double num2)
{
    long double result;
    result = num1 / num2;
    return result;
}

int expo(long double num1, long double num2)
{
    long double result;
    result = pow(num1, num2);
    return result;
}

int root(long double num1, long double num2)
{
    long double result;
    result = pow(num1, 1 / num2);
    return result;
}

int main()
{
    cout << "\nFor exponential calculations: num1 ^ num2\n"
         << endl;
    cout << "For root calculations: num1 ^ 1/num2\n"
         << endl;

    long double num1, num2;
    string operation;
    cout << "Enter first number (num1): ";
    cin >> num1;
    cout << "Enter second number (num2): ";
    cin >> num2;
    cout << "Choose operation: (+)  (-)  (*)  (/)  (^)  (root) : ";
    cin >> operation;

    if (operation == "+")
    {
        cout << num1 << " "
             << operation << " "
             << num2 << " = "
             << sum(num1, num2) << endl;
    }
    else if (operation == "-")
    {
        cout << num1 << " "
             << operation << " "
             << num2 << " = "
             << subtract(num1, num2) << endl;
    }
    else if (operation == "*")
    {
        cout << num1 << " "
             << operation << " "
             << num2 << " = "
             << multiply(num1, num2) << endl;
    }
    else if (operation == "/")
    {
        cout << num1 << " "
             << operation << " "
             << num2 << " = "
             << divide(num1, num2) << endl;
    }
    else if (operation == "^")
    {
        cout << num1 << " "
             << operation << " "
             << num2 << " = "
             << expo(num1, num2) << endl;
    }
    else
    {
        cout << num1 << " "
             << "^"
             << " "
             << "1/" << num2 << " = " << root(num1, num2) << endl;
    }
}