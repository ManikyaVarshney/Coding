#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;
    int luckydigit=0;
    while (num >0) {
        int k = num % 10;
        if (k == 4 || k == 7) {
            luckydigit++;
        }
        num /= 10;
    }

    if (luckydigit == 4 || luckydigit == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
