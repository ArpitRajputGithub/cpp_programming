#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 100; i >= 0; i -= 3)
    {
        cout << i << " ";
        count++;
    }
    cout << endl << "Total number is : " << count;
}