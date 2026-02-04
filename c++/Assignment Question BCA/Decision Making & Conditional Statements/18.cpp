#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of B=";
    cin>>b;
    cout<<"Enter the value of C=";
    cin>>c;
    if(a>b && a>c){
        cout<<"A is the greatest number="<<a;
    }
    else if(b>c){
        cout<<"B is the greatest number="<<b;
    }
    else{
        cout<<"c is the greatest number="<<c;
    }
    return 0;
}