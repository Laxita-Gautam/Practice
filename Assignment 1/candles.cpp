#include <bits/stdc++.h>

using namespace std;
int main(){
    int candles[1000000],i,n;
    int m=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>candles[i];
    }
    int max=candles[0];
    for(i=1;i<n;i++){
        if(max<candles[i]){
            max=candles[i];
        }
    }
    for(i=0;i<n;i++){
        if(max==candles[i]){
            m++;
        }
    }
    cout<<m;
    return 0;
}
