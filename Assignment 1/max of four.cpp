#include <bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d);
int max_of_four(int a, int b, int c, int d)
{   int gre;
    if(a>b && a >c && a >d)
        gre = a;
    else if(b>a && b>c && b>d)
        gre = b;
    else if(c>a && c>b && c>d)
        gre = c;
    else if(d>a && d>b && d>c)
        gre = d;
    else if(a=b=c=d)
        gre = a;
return gre;
}
int main() {
    int a, b, c, d;
    int ans;
    cin>>a>>b>>c>>d;
    ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
