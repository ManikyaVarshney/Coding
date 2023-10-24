#include <bits/stdc++.h>
using namespace std;
int main(){
        double n;
        cin>>n;
        double array[10000],sum=0;
        for(int i=0;i<n;i++){
            cin>>array[i];
            sum+=array[i];
        }
        double result =sum/n;
        cout<<result;

    return 0;
}