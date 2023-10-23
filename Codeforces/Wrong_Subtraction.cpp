#include <bits/stdc++.h>
using namespace std;
int main(){
    long int number,term;
    cin>>number>>term;
    while(term!=0){
        if(number%10==0){
            number/=10;
        }
        else{
            number-=1;
        }
        term--;
    }
    cout<<number;
    return 0;
}