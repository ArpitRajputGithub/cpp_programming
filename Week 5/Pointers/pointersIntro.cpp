#include <iostream>
using namespace std;
int main (){
    int x;
    //address of x
    cout<<&x<<endl; //0x61ff0c

    //using pointers for accesssing x;
    int* p = &x; //now a pointer variable p can access the address of x;

    cout<<p; // 0x61ff08 0x61ff08 (same address)

    
}