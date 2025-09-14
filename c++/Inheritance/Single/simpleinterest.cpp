#include<iostream>
using namespace std;
class SI{
    protected: int p,r,t;
    public: void input();
    void output();
};
class S:public SI{
private:int s;
public:void input1();
void output2();
};

void SI:: input(){
    cout<<"Enter the value of p=";
    cin>>p;
    cout<<"Enter the value of R=";
    cin>>r;
    cout<<"Enter the value of T=";
    cin>>t;
}
void SI::output(){
    cout<<"Principal="<<p<<endl<<"Rate="<<r<<endl<<"Time="<<t<<endl;
}
void S::input1(){
    s=(p*r*t)/100;
}
void S::output2(){
    cout<<"Simple interest="<<s;
}
int main(){
    S obj;
    obj.input();
    obj.output();
    obj.input1();
    obj.output2();
    return 0;
}