#include <iostream>

using namespace std;

bool isPresent(int arr[][4], int key, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    int key;
    cout << "Find? ";
    cin >> key;

    if (isPresent(arr, key, 3, 4))
    {
        cout << "Present\n";
    }
    else
    {
        cout << "Not found\n";
    }

    return 0;
}