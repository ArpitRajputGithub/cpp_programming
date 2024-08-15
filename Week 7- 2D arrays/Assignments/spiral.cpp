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

    // cout << "Matrix : " << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // Wave print  --> 1 2 3 6 9 8 7 4 5

    cout << "Spiral matrix : " << endl;
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    while (minr <= maxr && minc <= maxc)
    {
        for (int j = minc; j <= maxc; j++)
        {
            cout << a[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            cout << a[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        for (int j = maxc; j >= minc; j--)
        {
            cout << a[maxr][j] << " ";
        }
        if (minr > maxr || minc > maxc)
            break;
        maxr--;
        for (int i = maxr; i >= minr; i--)
        {
            cout << a[i][minc] << " ";
        }
        minc++;
    }
    return 0;
}