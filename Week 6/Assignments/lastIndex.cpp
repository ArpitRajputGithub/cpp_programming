#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
  
    int n;
    cout << "Enter no of elements : ";
    cin >> n;

    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    int x;
    cout << "Enter a number : ";
    cin >> x;
    
    int index = -1;
    for (int i = v.size() - 1; i >= 0; --i)
    {
        if (v[i] == x)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        std::cout << "Last occurrence of " << x << " is at index " << index << std::endl;
    }
    else
    {
        std::cout << x << " not found in the vector.\n";
    }
    return 0;
}