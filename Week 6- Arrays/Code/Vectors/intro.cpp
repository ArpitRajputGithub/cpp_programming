#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);

    cout <<"Size of vector : " <<v.size() <<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}