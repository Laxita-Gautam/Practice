#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int flag=0;
    cin>>n;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime no.";
    }
    else{
        cout<<"not a prime no.";
    }
    return 0;
}
