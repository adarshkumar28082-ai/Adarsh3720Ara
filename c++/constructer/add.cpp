#include<iostream>
using namespace std;
int val(int a,int b);
int val(int c,int d);
int main(){
    int a,b,c,d;
    cout<<"Enter the integer:-";
    cin>>a>>b>>c>>d;
    val(a,b);
    val(c,d);
}
int val(int a, int b){
    cout<<"sum="<<a+b<<endl;
}
int val(int c, int d){
    cout<<"sub="<<c-d;
    return 0;
}