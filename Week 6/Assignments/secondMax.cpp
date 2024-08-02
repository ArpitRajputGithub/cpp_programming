#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    //Second maximum
    int smax = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != max && smax<arr[i])
        {
            smax = arr[i];
        }
    }
    cout<<"Second max element is : "<<smax;
    return 0;
}