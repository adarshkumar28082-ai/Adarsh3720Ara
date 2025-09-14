#include<iostream>
using namespace std;
class A{
    protected: int x;
    public: void showx(){
        x=20;
    }
};
class D1:public A{
    protected: int y;
    public: void showy(){
        y=30;
    }
};

class D2:public D1{
    protected: int z;
    public: void showz(){
        z=50;
    }
};

class B2{
    protected: int a;
    public: void showa(){
        a=600;
    }
};
class total: public D2,public B2{
    private: int t;
    public: funcation(){
        t=a+x+y+z;
        cout<<t;
    }
};
int main(){
    total obj;
    obj. showx();
    obj. showy();
    obj. showz();
    obj. showa();
    obj. funcation();
    return 0;
}