#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}