#include <iostream>
using namespace std;
int main() {
     int a;
    cout<<"enter the year";
    cin>>a;
    if(a%400==0){
        cout<<"Leap year";
    }
    else if(a%100==0){
        cout<<"not a leap year";
    }
    else if(a%4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}
