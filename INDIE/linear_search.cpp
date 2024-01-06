#include <iostream>
#include <cmath>

using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 54, 6, 23, 52, 53, 23};
    int key;
    cout << "Enter a number: ";
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "It is present" << endl;
    }
    else
    {
        cout << "It is absent" << endl;
    }
}