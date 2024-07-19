#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    int ascii = (int)ch;
    //int ascii = ch; will also work. Implicit conversion by compiler.

    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
    {
        cout << "It is an alphabet";
    }
    else
    {
        cout << "It is not an alphabet";
    }
}