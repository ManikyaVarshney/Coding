#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    // Check if weight is even and greater than 2
    if (weight % 2 == 0 && weight > 2) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
