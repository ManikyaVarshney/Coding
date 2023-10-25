#include <bits/stdc++.h>
using namespace std;
int main(){
        long int amount,count=0;
        cin>>amount;
        while(amount!=0){
            if(amount>=100){
                amount-=100;
                count++;
            }
            else if(amount>=20){
                amount-=20;
                count++;
            }
            else if(amount>=10){
                amount-=10;
                count++;
            }
            else if(amount>=5){
                amount-=5;
                count++;
            }
            else if(amount>=1){
                amount-=1;
                count++;
            }
        }
        cout<<count<<endl;
    return 0;
}