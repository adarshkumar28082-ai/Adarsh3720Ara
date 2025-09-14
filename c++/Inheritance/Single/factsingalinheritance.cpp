#include<iostream>
using namespace std;
class add{
    protected: int n;
    public: void input();
    };
    void add::input(){
        cout<<"Enter the value of N=";
        cin>>n;
    }
class add1: public add{
    private: int fact;
    public: void  input1();
    void output();
};
    void add1 :: input1(){
    fact=1;  
    } 

void add1::output(){

    while(n>0){
        fact=fact*n;
        n--;
    }
    cout<<fact;
}
int main(){
    add1 obj;
    obj. input();
    obj. input1();
    obj. output();
    return 0;

}