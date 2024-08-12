#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "Enter Target : ";
    cin >> x;

    vector<int> v;

    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j <= v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
     
    return 0;
}