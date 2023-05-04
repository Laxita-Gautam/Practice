#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a%7==0||a%10==7){
        cout<<"Buzz no.";
    }
    else{
        cout<<"Not a buzz no.";
    }
    return 0;
}
