#include <bits/stdc++.h>

using namespace std;

int main() {

int n,i,j; 

cin>>n;

int arr[n], arr1[n]; 

for(i=0;i<n;i++){ 

    cin>>arr[i];

} 

for(j=0;j<n;j++){ 

    arr1[j]=arr[n-(j+1)];

}

int count=0;

for (i=0;i<n;i++){ 

    if(arr[i]!=arr1[i]){

         count++;

         break;

    }

}

if(count>0){ 
  cout<<"not a Pallindrome";

}

else{

cout<<"pallindrome";

}

return 0;

}
