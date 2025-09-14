#include<iostream>
using namespace std;
class velo{
    protected: int u,a,t;
    public: void input();
    void output();
};
class veloc:public velo{
private:int s;
public:void input1();
void output1();
};
void velo::input(){
    cout<<"Enter the value of U=";
    cin>>u;
    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of T=";
    cin>>t;
}
void velo::output(){
    cout<<"U="<<u<<endl<<"A="<<a<<endl<<"T="<<t<<endl;
}
void veloc::input1(){
    s=u*t+0.5*a*t*t;
}
void veloc::output1(){
    cout<<"S="<<s;
}
int main(){
    veloc obj;
    obj.input();
    obj.input1();
    obj.output();
    obj.output1();
    return 0;
}