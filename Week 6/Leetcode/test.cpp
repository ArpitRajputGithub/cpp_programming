#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> mergeVec(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> res;
    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
        }
        else
        {
            res.push_back(arr2[j]);
            j++;
        }
    }

    // add the remaining elements, if any
    while (i < arr1.size())
    {
        res.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size())
    {
        res.push_back(arr2[j]);
        j++;
    }

    return res;
}

int main()
{
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(6);
    display(arr1);

    vector<int> arr2;
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(9);
    arr2.push_back(10);
    display(arr2);

    vector<int> vec = mergeVec(arr1, arr2);

    display(vec);

    return 0;
}