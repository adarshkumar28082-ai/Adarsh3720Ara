#include<iostream>
using namespace std;
class rect{
    protected: int l,b;
    public: void input();
    void output();
};
class area:public rect{
    protected: int area;
    public:void input1();
    void output1();
};
void rect::input(){
    cout<<"Enter the value of l=";
    cin>>l;
    cout<<"Enter the value of b=";
    cin>>b;
}
void rect::output(){
    cout<<"lengeth="<<l<<endl<<"bredth="<<b<<endl;
}
void area::input1(){
    area=l*b;
}
void area::output1(){
    cout<<"area of rectangle="<<area<<endl;
}
int main(){
    area a;
    a.input();
    a.output();
    a.input1();
    a.output1();
    return 0;
}