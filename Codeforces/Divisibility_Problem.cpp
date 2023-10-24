#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    while (testcase--) {
        long long a, b;
        cin >> a >> b;

        if (a % b == 0) {
            cout << "0" << endl;
        } else {
            long long remainder = a % b;
            long long difference = b - remainder;
            cout << difference << endl;
        }
    }

    return 0;
}
