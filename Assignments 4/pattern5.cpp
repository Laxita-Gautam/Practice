#include <iostream>

using namespace std;

int main()
{
    int i,j,a;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            a=i+j;
            if(a<5){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
    cout<<"\n";
    }
    return 0;
}
