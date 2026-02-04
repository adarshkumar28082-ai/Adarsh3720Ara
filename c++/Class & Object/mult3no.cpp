#include<iostream>
using namespace std;
class mult{
    private: int a,b,c,d;
    public: void input(){

        cout<<"Enter the value of A:-";
        cin>>a;
        cout<<"enter the value of b:-";
        cin>>b;
        cout<<"Ente the value of c:-";
        cin>>c;       
    }
    void output(){
        d=a*b*c;
        cout<<d;
    }
};
int main(){
    mult obj;
    obj.input();
    obj.output();
    return 0;
}