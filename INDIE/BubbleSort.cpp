#include <iostream>
#include <cmath>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Size of array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        bool swapped = false;
        for(int j = 0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
                swapped = true;
        }
        if (swapped == false){
            break;
        }
    }
    printArray(arr, size);

    return 0;
}