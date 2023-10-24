#include <bits/stdc++.h>
using namespace std;
int main(){
        int n,h;
        cin>>n>>h;
        double array[1000],sum=0;
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<n;i++){
            sum+=ceil(array[i]/h);
        }
        cout<<sum;
    return 0;
}