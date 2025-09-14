#include<iostream>
using namespace std;
class name{
    private: int a;
    public:virtual void input(){
        cout<<"Adarsh kumar"<<endl;
    }
};
class bestfriend:public name{
    private: int b;
    public: void input(){
        cout<<"Rohit pandey"<<endl;
    }
};
class bhai: public name{
    public: void input(){
        cout<<"Ankit kumar, diwakar, arman"<<endl;
    }
};
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