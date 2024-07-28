#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the digit : ";
    cin >> n;
    // // some maths is done here !
    // ****
    // ***       no of row(i) + no of star = n + 1;
    // **        no of stars = n + 1 - i;
    // *


    // no of stars = n + 1 - i

    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}