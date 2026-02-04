#include<iostream>
using namespace std;
int add();
int main(){
int r;
r=add();
cout<<"Add="<<r;
return 0;
}
int add(){
    int a,b;
    cout<<"Enter the vaslue of A=";
    cin>>a;
    cout<<"Enter the value of B=";
    cin>>b;
    return a+b;
}