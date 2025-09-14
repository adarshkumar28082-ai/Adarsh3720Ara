#include<iostream>
using namespace std;
class reve{
    protected: int n;
    public: void input();
    void output();
};
class rever:public reve{
    private: int rev,sum;
    public: void input1();
    void output1();
};
void reve::input(){
    cout<<"Entre the value of n=";
    cin>>n;
}
void rever::output1(){
    sum=0;
    while(n>0){
        rev=n%10;
        sum=sum*10+rev;
        n=n/10;
}
cout<<"reverse="<<sum;
}
int main(){
    rever obj;
    obj. input();
    obj. output1();
    return 0;
}