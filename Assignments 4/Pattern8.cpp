
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a=65;
    for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++)
		{
		    a=65;
		    char b=a+i+j;
		    cout<<b;
		}
		cout<<endl;
	}
   return 0;
}

