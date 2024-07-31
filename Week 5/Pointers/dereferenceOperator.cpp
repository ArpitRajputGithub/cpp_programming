#include <iostream>
using namespace std;
int main (){
    int x = 111;
    cout<<&x<<endl; //0x61ff08

    int* p = &x; 
    cout <<p<<endl; //0x61ff08

    cout<<*p<<endl; //111 (Dereference operator can acces the VALUE of x;)
    
    //and if it can access the value, then it can also change the value of its variable.

    *p = 222;
    cout<<x<<endl; //222 (Value is changed)

}