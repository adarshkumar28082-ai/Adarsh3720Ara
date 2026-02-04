#include<iostream>
using namespace std;
class Div{
    private: int a,b,c;
    public: void input(){
        cout<<"Enter the value of A=";
        cin>>a;
        cout<<"Enter the value of B=";
        cin>>b;
    }
    void output(){
        c=a/b;
        cout<<"Div="<<c;
    }
};
int main(){
    Div obj;
    obj. input();
    obj. output();
    return 0;
}