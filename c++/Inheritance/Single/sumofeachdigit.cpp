#include<iostream>
using namespace std;
class sumof{
    protected: int n,remi;
    public: void input();
    void output();
};
class each:public sumof{
    private: int sum;
    public:void input1();
    void output1();
};
void sumof::input(){
    cout<<"Enter the integer=";
    cin>>n;
}
void sumof::output(){
    //cout<<"integer="<<n;
}
void each::input1(){
    sum=0;
    while(n>0){
        remi=n%10;
        sum=sum+remi;
        n=n/10;
    }
}
void each::output1(){
    cout<<"Sum of each digit="<<sum;
}
int main(){
    each obj;
    obj.input();
    obj.input1();
    obj.output();
    obj.output1();
    return 0;
}