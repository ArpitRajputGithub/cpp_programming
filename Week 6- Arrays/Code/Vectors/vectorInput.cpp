#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    int n; 
    cin >> n;
    int ele;

    for (int i = 0; i < n; i++) {
        cin >> ele;
        v.push_back(ele);
    }
    return 0;
}