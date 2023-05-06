#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,a;
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            a=i+j;
            if(a<(n+1)){
                cout<<" ";
            }
            else{
                cout<<"#";
            }
        }
    cout<<"\n";
    }

    return 0;
}
