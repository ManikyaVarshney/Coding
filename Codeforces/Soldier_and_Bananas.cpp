#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total=((w*(w+1))/2)*k;
    int x=total-n;
    if(x<=0){
        cout<<"0";
    }
    else{
        cout<<x;
    }
    return 0;
}