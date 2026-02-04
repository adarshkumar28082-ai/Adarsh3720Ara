#include<iostream>
using namespace std;
int add();
int main(){
add();
return 0;
}
int add(){
int a,b;
cout<<"Enter the value of A:-";
cin>>a;
cout<<"Enter rthe vlue of B:-";
cin>>b;
cout<<"Add=" << a+b;
return 0;
}