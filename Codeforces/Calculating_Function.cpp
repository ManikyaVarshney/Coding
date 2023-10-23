#include <bits/stdc++.h>
using namespace std;
long long  sumeven(long long n){
    if(n<=0){
        return 0;
    }
    return n*(n+1);
}
long long sumodd(long long n){
    if(n<=0){
        return 0;
    }
    return n*(n);
}
int main(){
        long long num,sum=0;
        cin>>num;
        if(num%2==0){
        cout<<sumeven(num/2)-sumodd(num/2);}
        else{
            cout<<sumeven(num/2)-sumodd((num/2)+1);
        }
    return 0;
}