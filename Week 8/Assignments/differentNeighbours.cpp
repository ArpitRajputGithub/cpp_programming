#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (n == 0)
        {
            break;
        }
        if (n == 1)
        {
            count++;
            break;
        }
        if (s[i] == 0)
        {
            if (s[i] != s[i + 1])
            {
                count++;
            }
        }
        if (s[i] == n - 1)
        {
            if (s[i] != s[i - 1])
            {
                count++;
            }
        }
        else if (s[i] != s[i + 1] && s[i] != s[i - 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}