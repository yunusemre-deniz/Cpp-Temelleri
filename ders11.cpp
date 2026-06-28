#include<iostream>
using namespace std;

int main(){

    int x;
    float a,b;

    x=5;
    a=10;
    b=7.5;

    x+=a;
    cout<<x<<endl;
    b+=a;
    x*=b;
    
    cout<<b<<" "<<x;
}