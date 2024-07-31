#include <iostream>
using namespace std;

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 6;
    int b = 3;
    int *x = &a;
    int *y = &b;
    swap(x, y);
    cout << a << endl
         << b;
}