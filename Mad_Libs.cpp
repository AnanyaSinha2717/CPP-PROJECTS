#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string color, plural_noun, animal;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, plural_noun);
    cout << "Enter an animal: ";
    getline(cin, animal);

    cout << "Roses are " << color << endl;
    cout << plural_noun << " are blue\n";
    cout << "I love " << animal << endl;
    return 0;
}