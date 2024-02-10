#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cout << "Rows? ";
    cin >> r;
    cout << "Columns? ";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << '\n';

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << '\n';
    int row = 1;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << row << " row sum = " << sum << '\n';
        row++;
    }

    return 0;
}