#include<iostream>
using namespace std;
class add{
    protected: int a,b,c;
    public: void input();
    };
    void add::input(){
        cout<<"Enter the value of A=";
        cin>>a;
        cout<<"Enter the value of B=";
        cin>>b;
        cout<<"Enter the value of C=";
        cin>>c;
    }
class add1: public add{
    private: int d;
    public: void  output();
};
void add1::output(){
    d=a+b+c;
    cout<<d;
}
int main(){
    add1 obj;
    obj. input();
    obj. output();
    return 0;

}