# include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int total_participant, place;
    cin>>total_participant>>place;
    int array[1000];
    for(int i=0;i<total_participant;i++){
        cin>>array[i];
    }
    sort(array, array + total_participant, greater<int>());
    int count=0;
    for(int i=0;i<total_participant;i++){
        if(array[i]>=array[place-1] && array[i]>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}