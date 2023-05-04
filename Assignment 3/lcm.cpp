#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,x,y;
    cin>>a>>b;
    x=a;
    y=b;
    while(a%b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    int lcm=(x*y)/b;
    cout<<"Lcm="<<lcm;
    return 0;}
