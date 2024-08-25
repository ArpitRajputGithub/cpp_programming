#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   // size of string
   string str = "Arpit rajput";
   cout<< str.size() <<endl;  

   // push_back and pop_back
   str.push_back('i');   
   str.push_back('s');   
   str.push_back('f'); 
   cout<< str <<endl;  
   str.pop_back();
   cout<< str << endl;  
   str.pop_back();

   // + operator --> it adds a string 

   string s  = "Hello";
   s = s + "World"; // it appends and also prepends.
   cout<<s<<endl;

   // reverse()

   string str1 = "hello";
   reverse(str1.begin(), str1.end());
   cout<<str1<<endl;

   
   return 0;
}