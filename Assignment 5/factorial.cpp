#include <iostream>

using namespace std;

int main()
{
    int a,i;
    int fac=1;
    cin>>a;
    for(i=1;i<=a;i++){
        fac*=i;
    }
    cout<<fac;
    return 0;
}
