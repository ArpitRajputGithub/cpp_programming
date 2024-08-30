#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin >> s;

    // int n = s.length();
    // int max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = s[i];
    //     int count = 1;
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (s[j] == s[i])
    //         {
    //             count++;
    //         }
    //     }
    //     if (max < count)
    //     {
    //         max = count;
    //     }
    // }
    // cout << max;

    // Method 2

    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii - 97]++;
    }

    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < v[i])
            max = v[i];
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == v[i])
        {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " " << max;
        }
    }

    return 0;
}