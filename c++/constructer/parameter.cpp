#include<iostream>
#define pi 3.14;
using namespace std;
int area(int l,int b);
int area(int r);
   int main(){
    int l,b,r;
     cout<<"Enter the integer:-";
    cin>>l>>b>>r;
    area(l,b);
    area(r);
   }
int area(int l, int b){
    cout<<"area="<<l*b<<endl;
}
int area(int r){
    cout<<"radius="<<3.14*r*r;
    return 0;
}
