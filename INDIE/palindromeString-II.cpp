#include <iostream>
#include <ctype.h>

using namespace std;

// char toLowerCase(char ch)    // convert to lowercase
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

int size(char s[]) // size of string
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int checkPalindrome(char s[], int n) // check palindrome
{
    int b = 0, e = n - 1;

    while (b < e)
    {
        if (!isalnum(s[b])) // built-in function to check alpha-num
            b++;
        else if (!isalnum(s[e]))
            e--;
        else if (tolower(s[b]) == tolower(s[e])) // built-in function to convert to lowercase
        {
            b++;
            e--;
        }
        else
        {
            return 0;
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