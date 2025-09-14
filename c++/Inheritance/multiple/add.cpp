#include<iostream>
using namespace std;
class A{
    protected:int a,b;
    public: void input();
    void output();
};
class B{
    protected: int c,d;
    public:int input1();
    int output1();
};
class C:public A,public B{
    private:int e;
    public:int input2();
    int output2();
};
void A::input(){
    cout<<"Enter the integer of A=";
    cin>>a;
    cout<<"Enter the integer of B=";
    cin>>b;
}
void A::output(){
    cout<<"A="<<a<<endl<<"B="<<b<<endl;
}
int B::input1(){
    cout<<"Enter the integer of C=";
    cin>>c;
    cout<<"Enter the integer of D=";
    cin>>d;
}
int B::output1(){
    cout<<"C="<<c<<endl<<"D="<<d<<endl;
}
int C::input2(){
    e=a+b+c+d;
}
int C::output2(){
    cout<<"sum="<<e;
}
int main(){
    C d;
    d.input();
    d.input1();
    d.input2();
    d.output();
    d.output1();
    d.output2();
    return 0;
}