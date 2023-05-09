#include <iostream>

using namespace std;
void swap(int * ,int * );
int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<b;
    return 0;
}
void swap(int *x ,int *y ){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
