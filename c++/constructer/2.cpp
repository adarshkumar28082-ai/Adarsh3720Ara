#include<iostream>
using namespace std;
int Mult(int a, int b);
int Divide(int a, int b);
int main(){
    int a,b;
    cout<<"Enter the value of A=";
    cin>>a>>b;
    Mult(a,b);
    Divide(a,b);
}
    int Mult(int a, int b){
        cout<<"Multiplay="<<a*b<<endl;
        return a*b;
    }
    int Divide(int a, int b){
        cout<<"Divide="<<a/b;
        return a/b;
    }