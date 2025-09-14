#include<iostream>
using namespace std;
class name{
    //private: int a;
    public:virtual void input(){
        int a;
        cout<<"Enter the value of A="<<endl;
        cin>>a;
    }
};
class bestfriend:public name{
    //private: int b;
    public: void input(){
        int b;
        cout<<"Enter yhe value of B="<<endl;
        cin>>b;
    }
};
class bhai: public name{
    public: void input(){
        int c;+6
    }
};
virtual void bhai::input(){
    c=a+b;
    cout<<c;
}
int main(){ 
    name *A;
    bestfriend obj;
    bhai obj1;
    name database;
    A=&database;
    A->input();
    A=&obj;
    A->input();
    A=&obj1;
    A->input();
    return 0;
}