#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int rev = 0;
    int lastdigit = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        rev *= 10;
        rev += lastdigit;
        n /=10;
    }

    cout << rev;
}