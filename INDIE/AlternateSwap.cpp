#include <iostream>
#include <cmath>

using namespace std;

void alternateSwap(int arr[], int size){
    int first = 0;
    int second = 1;
    while (first <= size - 2){
        swap(arr[first], arr[second]);
        first += 2;
        second += 2;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1, 2, 3, 4, 5};

    alternateSwap(even, 6);
    alternateSwap(odd , 5);

    printArray(even, 6);
    printArray(odd, 5);

    return 0;
}