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

void reversePart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    vector<int> v;

    int n;
    cout<<"Enter number of elements : ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    
    int start, end;
    cout<<"Enter start, end : ";
    cin >> start >> end;

    reversePart(start, end, v);
    display(v);
}