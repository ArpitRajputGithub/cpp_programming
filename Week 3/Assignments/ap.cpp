#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // Method 1 (for printing 1 3 5 7 9...)

   //for(int i = 1; i<= (2*n)-1; i++){
   //   cout <<i << " ";
   //}

    // Method 2 (for printing any AP)
    // eg. 4 7 10 13 16....
    int x = 4; // starting number
    for (int i = 1; i <= n; i++)
    {
        cout << x << " ";
        x += 3;
    }
}