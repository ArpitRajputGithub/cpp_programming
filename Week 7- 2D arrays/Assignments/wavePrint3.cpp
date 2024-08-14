#include <iostream>
using namespace std;
int main()
{
    int m, n;

    cout << "Enter rows of matrix: ";
    cin >> m;
    cout << "Enter cols of matrix: ";
    cin >> n;

    int a[m][n];

    cout << "Enter elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Wave print  --> 1 4 7 8 5 2 3 6 9

    cout << "Wave matrix : " << endl;
    for (int j = 0; j <n ; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int i = m-1; i >=0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}