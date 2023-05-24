#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[1000],i,j,k,n;
    int count=0;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if((arr[i]+arr[j])%k==0){
               count++; 
            }
        }
    }
    cout<<count;
    return 0;
}
