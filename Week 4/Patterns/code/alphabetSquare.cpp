#include <iostream>
using namespace std;
int main()
{
    // METHOD 1
    int n;
    cout << "Enter an alphabet : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}

// METHOD 2
//  char ch;
//  cout << "Enter an alphabet : ";
//  cin >> ch;

// for (char i = (int)'A'; i <= (int)ch; i++)
// {
//     for (char j = (int)'A'; j <= (int)ch; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }
