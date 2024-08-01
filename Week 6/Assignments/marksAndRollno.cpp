#include <iostream>
using namespace std;
int main()
{
    int marks[9] = {59, 54, 62, 87, 96, 21, 5, 16, 56};
    for (int i = 0; i <= 8; i++)
    {
        if (marks[i] < 35)
        {
            cout << "Roll Number is : " << i << endl;
        }
    }
    return 0;
}