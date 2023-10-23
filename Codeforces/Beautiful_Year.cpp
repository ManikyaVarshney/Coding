#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(string year) {
    for (int i = 0; i < year.length(); i++) {
        for (int j = i + 1; j < year.length(); j++) {
            if (year[i] == year[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string year;
    cin >> year;

    while (true) {
        year = to_string(stoi(year) + 1); // Convert to integer, increment, and convert back to string
        if (hasDistinctDigits(year)) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
