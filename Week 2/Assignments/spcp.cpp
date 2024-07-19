#include <iostream>
using namespace std;
int main()
{
    int selprice;
    cout << "Enter selling price : ";
    cin >> selprice;
    int costprice;
    cout << "Enter Cost price : ";
    cin >> costprice;
    if (selprice > costprice)
    {
        cout << "Profit = " << selprice - costprice;
    }
    else if (costprice > selprice)
    {
        cout << "Loss = " << costprice - selprice;
    }
    else
    {
        cout << "No profit No loss";
    }
}