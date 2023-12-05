// majority element using boyer moore algo

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int majorityElement(vector<int> &arr)
{
    int count = 0;
    int el;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
        {
            el = arr[i];
            count++;
        }
        else if (arr[i] == el)
            count++;
        else
            count--;
    }
    return el;
}

int main()
{
    int n, num, i = 0;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> v;

    while (i < n)
    {
        cin >> num;
        v.push_back(num);
        i++;
    }
    cout << "Majority element is = " << majorityElement(v) << endl;

    return 0;
}