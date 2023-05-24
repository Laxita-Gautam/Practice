#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[3],b[3],i,j,k;
    int alice=0;
    int bob=0;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    for(j=0;j<3;j++){
        cin>>b[j];
    }
    for(k=0;k<3;k++){
        if(a[k]>b[k]){
            alice++;
        }
        else if(a[k]<b[k]){
            bob++;
        }
    }
    cout<<alice<<" "<<bob;
    return 0;
}
