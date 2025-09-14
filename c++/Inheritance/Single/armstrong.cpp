#include<iostream>
#include<cmath>
using namespace std;
class A{
protected: int num,digit;
public: void input();
void output();
};
class B{
protected: int orig,i;
public: void input1();
void output1();
};
class arm:public A,public B{
private: int sum;
public: void input2();
void output2();
};
void A::input(){
    cout<<"Enter the integer=";
    cin>>num;
}
void arm::input2(){
    sum=0;
    orig=num;
    while(num>0){
        digit=num%10;
        sum=sum+pow(digit,digit);
        num=num/10;
    }
    cout<<"Armstrong numbers between 1 And 1000 are:-"<<endl;
}
void arm::output2(){
    cout<<"Armstrong numbers between 1 And 1000 are:-"<<endl;
    for(i=1;i<=1000;i++){
        if(orig==num  ){
            cout<<i<<" ";
    
        }
    }
    cout<<endl;
}
int main(){
    arm obj;
    obj. input();
    obj.input2();
    obj.output2();
    return 0;
}