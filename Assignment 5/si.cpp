#include <bits/stdc++.h>

using namespace std;

int main()
{
    float p,r,t,c,si,a;
    cout<<"Enter principle rate and time respectively";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    a=p*((pow((1+r/100),t)));
    c=a-p;
    cout<<"Simple inteerest="<<si<<"\n"<<"compound interest="<<c;
    return 0;
}
