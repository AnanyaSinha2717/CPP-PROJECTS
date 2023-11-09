#include <iostream>
#include <cmath>

using namespace std;

int pivotIndex(int arr[], int n){
    int s = 0, e = n-1;
    while(s<e)
    {
        int mid = s+(e-s)/2;
        if (arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    int arr[5] = {3,8,10,17,1};

    int pivot = pivotIndex(arr, 5);
    cout << "Pivot index is " << pivot << endl;

    return 0;
}