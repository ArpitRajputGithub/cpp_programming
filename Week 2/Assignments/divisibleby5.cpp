#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Give me a positive number only";
    }
    else if (n % 5 == 0)
    {
        cout << "It is divisible by 5";
    }
    else
    {
        cout << "It is not divisible by 5";
    }
}