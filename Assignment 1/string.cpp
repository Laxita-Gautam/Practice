#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<"\n"<<a+b<<"\n";
    char x=a[0];
    a[0]=b[0];
    b[0]=x;
    cout<<a<<" "<<b;
    return 0;
}
