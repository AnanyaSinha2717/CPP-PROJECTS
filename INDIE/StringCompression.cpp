#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> chars;
    chars = {
        'a',
        'a',
        'b',
        'b',
        'c',
        'c',
        'c',
        'b',
        'b',
        'b',
        'b',
        'b',
        'b',
        'b',
        'b',
    };
    string s = "";
    int alp[26] = {0};

    for (int i = 0; i < chars.size(); i++)
    {
        int index = chars[i] - 'a';
        alp[index]++;
    }

    for (char i = 0; i < 26; i++)
    {
        if (alp[i] == 1)
        {
            char ch = i + 'a';
            s += ch;
        }
        else if (alp[i] > 1)
        {
            char ch = i + 'a';
            s += ch;
            s += to_string(alp[i]);
        }
    }

    int size = s.size();
    chars.erase(chars.begin(), chars.end());

    for (int i = 0; i < size; i++)
    {
        chars.push_back(s[i]);
        cout << chars[i] << ", ";
    }
    cout << "size = " << chars.size() << '\n';

    return 0;
}
