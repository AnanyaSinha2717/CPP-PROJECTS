#include <iostream>
#include <vector>

using namespace std;

int size(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int checkPalindrome(char s[], int n)
{
    int b = 0, e = n - 1;

    while (b < e)
    {
        if (s[b] != s[e])
        {
            return 0;
        }
        else
        {
            b++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char s[20];
    cin >> s;

    int n = size(s);

    if (checkPalindrome(s, n))
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}