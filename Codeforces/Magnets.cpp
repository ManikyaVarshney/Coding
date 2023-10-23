#include <bits/stdc++.h>
using namespace std;
int main(){
        long int n;
        cin>>n;
        long int array[1000000],group=0;
        for(long int i=0;i<n;i++){
            cin>>array[i];
        }
        for(long int i=0;i<n;i++){
            if(array[i]!=array[i+1]){
                group++;
            }
        }
        cout<<group;
    return 0;
}