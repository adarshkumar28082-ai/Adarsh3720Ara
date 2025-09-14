#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,n=0,i;
    cout<<"Enter the value of a=";
    cin>>a;
    cout<<"Enter the value of b=";
    cin>>b;
    for(i=a;i<=b;i++){
        n=n +(i*i*i);
        }
        cout<<endl<<n; 
        return 0;
}