#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],i,n,j;
    float positive=0,negative=0,zero=0;
    float p,m,z;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(j=0;j<n;j++){
        if(arr[j]>0){
            positive++;
        }
        else if(arr[j]==0){
            zero++;
        }
        else{
            negative++;
        }
    }
    p=positive/n;
    m=negative/n;
    z=zero/n;
    cout<<fixed<<setprecision(6)<<p<<"\n"<<m<<"\n"<<z;
    return 0;
}
