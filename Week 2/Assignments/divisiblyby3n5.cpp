#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin >> n;
    
    if (n>=0 && n%3==0 && n%5==0){
        cout<<"It is divisible by 3 and 5";
    }
    else {
        cout<<"It is not divisible by 3 and 5";
    }
}