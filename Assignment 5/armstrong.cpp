#include <iostream>

using namespace std;

int main()
{
    int n,r,a;
    int sum=0;
    cin>>n;
    a=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==a){
        cout<<"armstrong no.";
    }
    else{
        cout<<"not a armtrong no.";
    }
    return 0;
}
