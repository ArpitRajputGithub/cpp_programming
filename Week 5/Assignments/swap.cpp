#include <iostream>
using namespace std;
int main (){
    int a, b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<a << " "<< b;
}