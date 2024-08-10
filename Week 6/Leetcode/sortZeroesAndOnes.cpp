#include <iostream>
#include <vector>
using namespace std;

// Method 1: Counting and Overwriting
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
        if (i < noZ)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 1;
        }
    }
}

// Method 2: Two-pointer approach
void sortvecc(vector<int> &b)
{
    int i = 0;
    int j = b.size() - 1;

    while (i < j)
    {
        
        while (i < j && b[i] == 0)
        {
            i++;
        }

        
        while (i < j && b[j] == 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(b[i], b[j]);
            i++;
            j--;
        }
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

    
    cout << "Before sorting:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // sortVec(v);
    sortvecc(v);

    
    cout << "After sorting:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
