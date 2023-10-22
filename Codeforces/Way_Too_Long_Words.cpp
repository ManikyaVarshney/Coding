#include <iostream>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test!=0){
    string str;
    cin >> str;
    int len = str.length();
    if (len <= 10) {
        cout << str << endl;
    } else {
        cout << str[0] << len - 2 << str[len - 1] << endl;
    }
    test--;
    }
    return 0;
}
