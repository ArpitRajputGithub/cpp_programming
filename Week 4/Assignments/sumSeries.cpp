#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    //Method 1

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else 
        {
            sum = sum - i;
        }
    }
    cout<<sum;

    // Method 2

    if(n%2==0) sum = -n/2;
    else sum = (-n/2) + n;

}

