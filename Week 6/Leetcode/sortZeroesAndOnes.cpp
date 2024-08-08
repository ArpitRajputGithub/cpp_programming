#include <iostream>
#include <vector>
using namespace std;

void sortVec(vector<int> &a)
{
    int noZ = 0;
    int noO = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
            noZ++;
        else
            noO++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (i < noZ )
        {
            a[i] = 0;
        }
        else a[i] = 1;
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    // print vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    sortVec(v);

    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}