#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "Enter the size of array : ";
   cin >> n;
   int arr[n];

   for (int i = 0; i <= n - 1; i++)
   {
      cin >> arr[i];
   }

   int x;
   cout << "Enter the element you want to search : ";
   cin >> x;
   for (int i = 0; i <= n - 1; i++)
   {
      if (arr[i] == x)
      {
         cout << "Available" << endl;
         break;
      }
      else if (arr[i] != 0)
      {
         cout << "Not Available";
         break;
      }
   }

   return 0;
}