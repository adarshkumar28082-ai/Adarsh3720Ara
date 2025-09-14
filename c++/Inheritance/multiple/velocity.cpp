#include<iostream>
using namespace std;
class velo{
    protected: int u;
    public: void input();
    void output();
};
class veloc:public velo{
    protected: int a;
    public: void input1();
    void output1();
};
class veloci:public veloc{
    protected: int t;
    public:void input2();
    void output2();
};
class velocit:public veloci{
    private:int s;
    public: void input3();
    void output3();
};
void velo::input(){
    cout<<"Enter the value of U=";
    cin>>u;
}
void velo::output(){
    cout<<"U="<<u<<endl;
}
void veloc::input1(){
    cout<<"Enter the value of A=";
    cin>>a;
}
void veloc::output1(){
    cout<<"A="<<a<<endl;
}
void veloci::input2(){
    cout<<"Enter the value of T=";
    cin>>t;
}
void veloci::output2(){
    cout<<"T="<<t<<endl;
}
void velocit::input3(){
    s=u*t+0.5*a*t*t;
}
void velocit::output3(){
    cout<<"S="<<s;
}
int main(){
    velocit obj;
    obj. input();
    obj.input1();
    obj.input2();
    obj.input3();
    obj.output();
    obj.output1();
    obj.output2();
    obj.output3();
    return 0;
}