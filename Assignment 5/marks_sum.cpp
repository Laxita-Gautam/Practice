#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e;
    float sum;
    float per;
    cout<<"Enter 5 subject marks out of 100";
    cin>>a>>b>>c>>d>>e;
    sum=a+b+c+d+e;
    per=((a+b+c+d+e)/500)*100;
    cout<<sum<<"\n"<<per;
    return 0;
}
