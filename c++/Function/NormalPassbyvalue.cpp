#include<iostream>
using namespace std;
int Add(int a, int b);
int main(){
    Add(7,8);
    return 0;
}
int Add(int  a, int b){
    cout<<"Add="<<a+b;
    return 0;
}