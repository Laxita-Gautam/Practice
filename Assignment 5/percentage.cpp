#include <iostream>

using namespace std;

int main()
{
     float p,a,b,c,d,e;
    cout<<"enter your marks";
    cin>>a>>b>>c>>d>>e;
    p=((a+b+c+d+e)/500)*100;
    if(p>90){
        cout<<"A";
    }
    else if(p>80&&p<=90){
        cout<<"B";
    }
    else if(p>60&&p<=80){
        cout<<"C";
    }
    else{
        cout<<"D";
    }
    return 0;
}
