#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);

    cout << "6 present or not " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "upper bound " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "lower bound " << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl;

    int a = 6, b = 9;
    cout << "max " << max(a, b) << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    string k = "abcd";
    reverse(k.begin(), k.end());
    cout << k << endl;

    return 0;
}