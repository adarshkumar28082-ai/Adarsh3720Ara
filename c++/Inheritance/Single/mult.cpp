#include<iostream>
using namespace std;
class mult{
    protected: int a,b;
    public:void input();
    void output();
};
class multy: public mult{
    protected: int c;
    public:void input1();
    public:void output1();
};
void mult:: input(){
    cout<<"Enter the value of a=";
    cin>>a;
    cout<<"Enter the value of b=";
    cin>>b;
}
void mult:: output(){
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}   
void multy:: input1(){
    c=a*b;
}   
void multy:: output1(){
    cout<<"Sum="<<c<<endl;
}   
int main(){
    multy s;
    s.input();
    s.output();
    s.input1();
    s.output1();
    return 0;
}