#include<iostream>
using namespace std;
class B{
    protected: int a,b;
    public: void show(){
        cout<<"Enter the value of A=";
        cin>>a;
        cout<<"Enter the value of B=";
        cin>>b;
    }
};
class D: public B{
    int t;
    public: void sum(){
        t=a+b;
        cout<<t<<endl;
    }
};
class D1: public B{
    int r;
    public: void sub(){
        r=a-b;
        cout<<r<<endl;
    }
};
class D2: public B{
    int k;
    public:void mult(){
        k=a*b;
        cout<<k<<endl;
    }
};
int main(){
    D obj;
    D1 obj1;
    D2 obj2;
    obj. show();
    obj. sum();
    obj1. show();
    obj1. sub();
    obj2.show();
    obj2. mult();
    return 0;
}