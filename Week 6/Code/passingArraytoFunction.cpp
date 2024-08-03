#include <iostream>
using namespace std;

void display (int a[], int size){
    for(int i = 0; i<=size-1; i++ ){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
}

void change (int b[], int size){
    b[0]= 52;
}

int main()
{
   //accessing an array
   // updation of an array
   //is it pass  by value or reference?

   int arr[5] ={1, 2, 3, 4, 5};
   display(arr, 5);
   change(arr, 5);          //usually size is given with the array as it is unknown in     some cases when we solve problems
   display(arr, 5);

   return 0;
}