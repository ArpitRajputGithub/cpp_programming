#include <iostream>
#include <vector>
using namespace std;

void sortvecc(vector<int> &b)
{
    int i = 0;
    int j = b.size() - 1;

    while (i < j)
    {
        // Move i right while we see 0s
        while (i < j && b[i] < 0)
        {
            i++;
        }

        // Move j left while we see 1s
        while (i < j && b[j] > 0 )
        {
            j--;
        }

        // Swap if b[i] is 1 and b[j] is 0
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
    v.push_back(-1);
    v.push_back(-5);
    v.push_back(15);
    v.push_back(1);
    v.push_back(-2);
    v.push_back(9);
    v.push_back(5);
    v.push_back(-3);

    // Print vector before sorting
    cout << "Before sorting:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sortvecc(v);

    // Print vector after sorting
    cout << "After sorting:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;     
}