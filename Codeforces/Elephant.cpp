#include <bits/stdc++.h>
using namespace std;
int main(){
    int distance,step=0;
    cin>>distance;
    while(distance!=0){
        if(distance>=5){
            distance-=5;
            step++;
        }
        else if(distance>=4){
            distance-=4;
            step++;
        }
        else if(distance>=3){
            distance-=3;
            step++;
        }
        else if(distance>=2){
            distance-=2;
            step++;
        }
        else if(distance>=1){
            distance-=1;
            step++;
        }
    }
    cout<<step;
    return 0;
}