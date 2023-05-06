#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10000];
    int n;
    int sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<=n;j++){
        sum+=arr[j];
    }
    cout<<sum;
    return 0;
}
