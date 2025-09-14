#include<iostream>
using namespace std;
class Add{
    private: int a,b,c;
    public: void input(){

    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of B=";
    cin>>b;
}
void output(){
    c=a+b;
    cout<<c;
    }
};
    int main(){
    Add obj;
    obj. input();
    obj. output();
    return 0;
    }