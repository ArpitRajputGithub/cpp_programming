#include <iostream>
using namespace std;

int fact(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fact(i) << endl;
    }
}