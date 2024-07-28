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
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}