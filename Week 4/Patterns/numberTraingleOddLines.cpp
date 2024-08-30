#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of lines in the pattern

    for (int i = 1; i <= n; i++) {
        // Print the increasing part
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        // Print the decreasing part
        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num;
            num--;
        }

        cout << endl;
    }

    return 0;
}
