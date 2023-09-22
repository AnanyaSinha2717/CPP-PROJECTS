#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    cout << "a&b: " << (a & b) << endl;          // AND
    cout << "a|b: " << (a | b) << endl;          // OR
    cout << "~a: " << (~a) << endl;              // NOT
    cout << "a^b: " << (a ^ b) << endl;          // XOR
    cout << "left shift: " << (a << 1) << endl;  // Left shift - shift bits of a to the left
                                                 // by 1
    cout << "right shift: " << (a >> 1) << endl; // Right shift
}