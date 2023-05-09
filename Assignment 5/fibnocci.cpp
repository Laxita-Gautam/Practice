#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for(i=1;i<=n;i++){
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
    }
    return 0;
}
