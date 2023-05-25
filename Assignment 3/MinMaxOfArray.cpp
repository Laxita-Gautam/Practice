#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,i;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++){

        cin>>arr[i];

    }

    int max=arr[0];

    int min=arr[0];

    for(i=1;i<n;i++){

        if(max<arr[i]){

            max=arr[i];

        }

    }

    for(i=0;i<n;i++){

        if(min>arr[i]){

            min=arr[i];

        }

    }

    cout<<"maximum "<<max<<"\n";

    cout<<"minimum "<<min;

    return 0;

}
