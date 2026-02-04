#include<iostream>
using namespace std;
int Add(int a,int b);
int Sub(int a,int b);
int main(){
    int a,b;
    cout<<"Enter the integer:-";
    cin>>a>>b;
    Add(a,b);
    Sub(a,b);
}
int Add(int a, int b){
    cout<<"sum="<<a+b<<endl;
}
int Sub(int a,int b){
    cout<<"sub="<<a-b;
    return 0;
}