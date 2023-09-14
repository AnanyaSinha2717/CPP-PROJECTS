#include <iostream>

using namespace std;

void sayhi(string name, int age); // can call a fcn from somewhere
                                  // else like this

int main()
{
    sayhi("Mike", 30);
    sayhi("Pede", 3340);
    sayhi("Goca", 3310);

    return 0;
}

void sayhi(string name, int age)
{
    cout << "hello " << name << ". You are " << age << endl;
}