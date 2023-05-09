#include <iostream>

using namespace std;

int main()
{
    int a,i;
    int sum_even=0;
    int sum_odd=0;
    cin>>a;
    for(i=1;i<=a;i++){
        if(i%2==0){
            sum_even+=i;
        }
        else{
            sum_odd+=i;
        }
    }
    cout<<"even sum="<<sum_even;
    cout<<"\n odd sum="<<sum_odd;
    return 0;
}
