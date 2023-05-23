#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100][100];
    int i,j,n,a,b;
    int sum1=0;
    int sum2=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a=i+j;
            if(a==(n-1)){
                sum2+=arr[i][j];
            }
        }
    }
    b=abs(sum2-sum1);
    cout<<b;
    return 0;
}
