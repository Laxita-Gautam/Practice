#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int i,n;
    int sum=0;
    cout<<"size of array=";
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(i=1;i<=n;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
