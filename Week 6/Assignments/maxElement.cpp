#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    // maximum
    int max = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum element is : " << max;
    return 0;
}