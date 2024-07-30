#include <iostream>
using namespace std;

void func(int x, int y){
    cout<<"Address of func x : "<< &x<<endl;
    cout<<"Address of func y : "<< &y;
}

int main (){
    int x;
    int y;
    cout<<"Address of main x : "<< &x<<endl;
    cout<<"Address of main y : "<< &y<<endl;
    func(x,y);
}

// NOTE -> The address of both x and y parameters are different.