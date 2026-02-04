#include<iostream>
using namespace std;    
int Add(int *a,int *b);
int main(){  
    int a,b,c;  
    cout<<"Enter the value of A=";  
    cin>>a;       
    cout<<"Enter the value of B=";  
    cin>>b;   
    c=Add(&a,&b);  
    cout<<"Add="<<c;  
    return 0;  
}
int Add(int *a,int *b){  
    return *a+*b;
}