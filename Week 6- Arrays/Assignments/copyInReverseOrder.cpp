#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    vector<int> vRev(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        vRev[i] = v[v.size() - 1 - i];
    }

    for (int i = 0; i < vRev.size(); i++)
    {
        cout << vRev[i] << " ";
    }
    cout << endl;
    return 0;
}

