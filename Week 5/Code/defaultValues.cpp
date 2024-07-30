#include <iostream>
using namespace std;

int fun(int x = 4, int y =3){ //default values
    cout<<x<<endl;
    cout<<y;
}
int main (){
    fun();
}