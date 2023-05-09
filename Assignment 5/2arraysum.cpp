#include <iostream>

using namespace std;

int main()
{
    int arr[100],arr1[100],arr2[100];
    int i,n,j,k;
    cout<<"size of array=";
    cin>>n;
    cout<<"elements for 1st array ";
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"elements for 2nd array";
    for(j=1;j<=n;j++){
        cin>>arr1[j];
    }
    for(k=1;k<=n;k++){
        arr2[k]=arr[k]+arr1[k];
        cout<<arr2[k];
    }
    return 0;
}
