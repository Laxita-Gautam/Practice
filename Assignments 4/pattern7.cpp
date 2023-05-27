#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,j;
    char a=65;
    for(i=1;i<=4;i++){
        for(j=i;j>0;j--){
            cout<<a;
        }
    a=65;
    a+=i;
    cout<<"\n";
    }
    return 0;
}
