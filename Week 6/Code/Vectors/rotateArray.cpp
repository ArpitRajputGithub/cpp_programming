#include <iostream>
#include <vector>
using namespace std;

void rotatePart(int i, int j, vector<int> &a)
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

void display(vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout << "Enter number of elements :";
    cin >> n;
    cout << "Enter elements : ";

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int k;
    cout << "Enter k : ";
    cin >> k;
    if(k>n) k = k%n;

    // int i;
    // cin>>i;
    // int j;
    // cin>>j;
    rotatePart(0, n - k - 1, v);
    rotatePart(n - k, n - 1, v);
    rotatePart(0, n - 1, v);

    display(v);

    return 0;
}