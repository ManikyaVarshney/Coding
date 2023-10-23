#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.length();
    int digit[100], j = 0;

    for (int i = 0; i < n; i += 2, j++) {
        digit[j] = str[i] - '0';
    }

    sort(digit,digit+j);

    cout << digit[0];
    for (int i = 1; i < j; i++) {
        cout << "+" << digit[i];
    }

    return 0;
}
