#include<iostream>
using namespace std;
class A{
    protected : int a,b;
    public: void input();
void output();
};
class B: public A{
    protected: int c;
    public: void input1();
void output1();

};
class C: public B{
    private: int d;
    public: void input2();
void output2();
};
void A::input(){
    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of B=";
    cin>>b;
}
void B:: input1(){
    cout<<"Enter the value of C=";
    cin>>c;
}
void A::output(){
    cout<<"A="<<a<<endl<<"B="<<b;
}
void B::output1(){
cout<<endl<<"C="<<c;
}
void C::input2(){
    d=a+b+c;
}
void C::output2(){
    cout<<endl<<"Sum="<<d;
}
int main(){
    C obj;
    obj.input();
    obj.input1();
    obj.output();
    obj.output1();
    obj.input2();
    obj.output2();
    return 0;
}