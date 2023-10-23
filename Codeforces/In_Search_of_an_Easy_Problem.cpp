#include <bits/stdc++.h>
using namespace std;
int main(){
        long int n;
        cin>>n;
        int array[100000];
        for(long int i=0;i<n;i++){
            cin>>array[i];
        }
        for(long int i=0;i<n;i++){
            if(array[i]==1){
                cout<<"Hard";
                return 0;
            }
        }
        cout<<"Easy";
        return 0;
}