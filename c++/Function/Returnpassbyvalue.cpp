#include<iostream>
using namespace std;
int Add(int a,int b);
int main(){
    int r;
    r=Add(8,98);
cout<<"Add="<<r;
return 0;
}
int Add(int a,int b){
    return a+b;
}