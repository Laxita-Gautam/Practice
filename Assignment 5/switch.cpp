#include <iostream>

using namespace std;

int main()
{
    int a,b,ch;
    cin>>a>>b;
    cout<<"addition(1)\nsubtraction(2)\nmultiplication(3)\ndivision(4)";
    cin>>ch;
    switch(ch){
        case 1:cout<<a+b;
            break;
        case 2:cout<<a-b;
            break;
        case 3:cout<<a*b;
            break;
        case 4:cout<<a/b;
            break;
    }
    return 0;
}
