#include<iostream>
using namespace std;
class A{
    protected: int n1;
    public: void input();
    void output();
};
class B: public A{
    protected: int n2;
    public: void input1();
    void output1();
};
class C: public B{
    private: int n3;
    public: void input2();
    void output2();
};
void A::input(){
    cout<<"Enter the value of n1=";
    cin>>n1;
}
void B::input1(){
cout<<"Enter the value of n2=";
cin>>n2;
}
void C::input2(){
    cout<<"Enter the value of n3=";
    cin>>n3;
}
void C::output2(){
    if(n1>n2||n1>n3){
        cout<<"print n1 is largest";
    }
    else if( n2>n3||n2>n1){
        cout<<"n2 is largest";
    }
    else if(n3>n1||n3>n2){
        cout<<"n3 is largest";
    }
    else{
        cout<<"somthing is wrong";
    }
}
int main(){
    C obj;
    obj.input();
    obj.input1();
    obj.input2();
    obj.output2();
    return 0;

}
