// SUM OF TWO NUMBERS USING POINTERS

#include <iostream>
using namespace std;
int main (){
    int x,y;
    cin>>x>>y;

    int* p1 =&x;
    int* p2 =&y;

    cout<<*p1 + *p2;
}