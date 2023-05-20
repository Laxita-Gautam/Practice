#include <bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d);
int max_of_four(int a, int b, int c, int d)
{   int g;
    if(a>b){
        if(a>c){
            if(a>d){
                g=a;
            }
            else{
                g=d;
            }
        }
    }
    else if(b>c){
            if(b>d){
                g=b;
            }
            else{
                g=d;
            }
        }
    else if(c>d){
            g=c;
        }
    else{
            g=d;
    }
return g;
}
int main() {
    int a, b, c, d;
    int ans;
    cin>>a>>b>>c>>d;
    ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
