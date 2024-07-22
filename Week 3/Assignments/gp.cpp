#include <iostream>
using namespace std;
int main()
{

    // geometric progression program
    // 1 2 4 8 16 32 64 128 256.....
    
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int x = 1; // starting number
    for (int i = 1; i <= n; i++)
    {
        cout << x << " ";
        x *= 2;
    }
}