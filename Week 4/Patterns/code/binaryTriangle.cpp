#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the digit : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) 
        {
           if((i+j)%2==0) //i+j%2==0 tells if it is odd or even pair at once
           cout<<1;
           else cout<< 0;
        }
        cout << endl;
    }
}
