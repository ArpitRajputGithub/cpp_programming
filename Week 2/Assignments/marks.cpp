#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    (marks > 33 && marks <= 100) ? cout << "Pass" : cout << "Fail";
}