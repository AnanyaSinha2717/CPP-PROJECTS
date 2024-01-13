#include<iostream>

using namespace std;

int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverseString(char name[], int n){
    int s = 0, e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int main(){
    char name[20];
    cout << "Enter a string: ";
    cin >> name;
    cout << "Original name -> " << name << endl;

    int n = getLength(name);
    cout << "size = " << n << endl;

    reverseString(name, n);
    cout << "After reversing -> " << name << endl;

    return 0;
}