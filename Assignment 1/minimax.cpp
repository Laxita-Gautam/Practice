#include <bits/stdc++.h>

using namespace std;
int main(){
    long arr[5],i,m,n;
    long sum=0;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int min=arr[0];
    for(i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    m=sum-max;
    n=sum-min;
    cout<<m<<" "<<n;
    return 0;
}
