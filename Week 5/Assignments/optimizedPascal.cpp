#include <iostream>
using namespace std;
int main(){
    //Optimized pascal triangle 
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i =0 ; i<=n; i++){
        int crnt = 1;
        for(int j =0; j<=i; j++){
            cout<<crnt<<" ";
            crnt = crnt * (i-j)/(j+1);
        }
        cout<<endl;
    }
}