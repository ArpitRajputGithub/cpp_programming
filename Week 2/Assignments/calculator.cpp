#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char optr;
    cin >> a >> optr >> b;

    switch (optr)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
        default  :
        cout<<"Incorrect entry";
    }
    
}