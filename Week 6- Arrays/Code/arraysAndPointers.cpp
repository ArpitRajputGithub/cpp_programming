#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 35, 54, 55};
    int *ptr = arr;
    //    cout<<ptr<<endl;     // 0x61fef8
    //    cout<<*ptr<<endl;  // 1
    //    cout<<ptr[2];   // 35

    // printing array

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << i[arr] << " ";
    }
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }


    
    return 0;
}
