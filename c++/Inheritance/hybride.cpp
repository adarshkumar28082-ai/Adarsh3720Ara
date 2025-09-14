#include<iostream>
using namespace std;
class A{
    protected: int a;
    public: void s(){
        a=20;
    }
};
class A1:public A{
    protected: int k;
    public: void s(){
        k=30;
    }
};
class A2:public A1()