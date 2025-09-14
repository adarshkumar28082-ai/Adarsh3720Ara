#include<iostream>
using namespace std;
class M{
    protected: int a;
    public: void input1();
};
class U:public M{
    protected: int b;
    public: void input2();
};
class L{
    protected: int c;
    public: void input3();
};
class T:public U,public L{
    private: int d;
    public:  void input4();
    void output();
};
void M::input1(){
    cout<<"Enter the integer of A=";
    cin>>a;
}
void U::input2(){
    cout<<"Enter the integer of B=";
    cin>>b;
}
void L::input3(){
    cout<<"Enter the integer of C=";
    cin>>c;
}
void T:: input4(){
    d=a*b*c;
}
void T::output(){
    cout<<"Mult="<<d;
}
int main(){
    T obj;
    obj. input1();
    obj. input2();
    obj. input3();
    obj. input4();
    obj. output();
    return 0;
}