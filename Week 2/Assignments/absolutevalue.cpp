#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer : ";
    cin >> n;
    if (n >= 0)
    {
        cout << "Absolute value of " << n << " is " << n;
    }
    else 
    {
        cout << "Absolute value of " << n << " is " << -n;
    }
}