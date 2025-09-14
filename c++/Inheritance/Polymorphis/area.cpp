#include<iostream>
#define pi 3.14
using namespace std;
int area(int a,int b);
int area(int r);
int main(){
    int a,b,r;
    area(a,b);
    area(r);
}
int area(int a, int b){
    cout<<"Enter the value of a,b=";
    cin>>a>>b;
    cout<<"area="<<a*b<<endl;
}
int area(int r){
    cout<<"Enter the valu of r=";
    cin>>r;
    cout<<"circle="<<pi*r*r;
    return 0;
}