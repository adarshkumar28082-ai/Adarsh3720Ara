#include<iostream>
using namespace std;
class table{
    protected: int n;
    public: void input();
void output();
};
class table1:public table{
    private:int i;
    public:void input1();
        void output1();
};
void table::input(){
cout<<"Enter the integer:-";
cin>>n;
}
void table::output(){
    cout<<"table of="<<n<<endl;
}
/*void table1::input1(){
    for(i=1;i<=10;i++){

    }
}*/
void table1::output1(){
    for(i=1;i<=10;i++){

    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
}
int main(){
    table1 obj;
    obj. input();
    //obj.input1();
    obj.output();
    obj.output1();
    return 0;
}