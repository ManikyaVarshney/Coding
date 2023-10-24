#include <bits/stdc++.h>
using namespace std;
int main(){
        int x,y,year=0;
        cin>>x>>y;
        while(x<=y){
            year++;
            x*=3;
            y*=2;
        }
        cout<<year<<endl;
    return 0;
}