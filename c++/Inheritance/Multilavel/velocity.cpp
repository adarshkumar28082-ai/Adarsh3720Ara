#include<iostream>
using namespace std;
class velo{
protected:int u;
public: void input();
void output();
};
class veloc{
    protected:int a;
    public: void input1();
    void output1();
};
class veloci{
    protected:int t;
    public: void input2();
    void output2();
};
class velocit:public velo,public veloc,public veloci{
    private: int s;
    public: void input3();
    void output3();
};
void velocit::input3(){
    cout<<"Enter the value of U= ";
    cin>>u;
    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of T=";
    cin>>t;
}
void velocit::output3(){
    s=u*t+0.5*a*t*t;
    cout<<"S="<<s;
}
int main(){
    velocit obj;
    obj.input3();
    obj.output3();
    return 0;
}