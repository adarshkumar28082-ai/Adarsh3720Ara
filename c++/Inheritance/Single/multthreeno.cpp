#include<iostream>
using namespace std;
class mult{
    protected: int a,b;
    public: void input();
    void output();
};
class mult1: public mult{
    private: int c;
    public: void input1();
    void output1();
};
void mult::input(){
    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of B=";
    cin>>b;
}
void mult:: output(){
    cout<<a<<endl;
    cout<<b<<endl;
}
void mult1 :: input1(){
    c=a*b;
}
void mult1 :: output1(){
    cout<<"mult="<<c;
}
int main(){
    mult1 obj;
    obj.input();
    obj.output();
    obj.input1();
    obj.output1();
    return 0;
}
