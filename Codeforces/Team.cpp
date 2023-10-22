#include<iostream>
using namespace std;

int main(){
    int total_problems,k=0;
    cin>>total_problems;
    while(total_problems!=0){
    int team[3],sum=0;
    for(int i=0;i<3;i++){
        cin>>team[i];
        sum+=team[i];
    }
    if(sum>=2){
        k++;
    }
    total_problems--;
    }
    cout<<k;
    return 0;
}