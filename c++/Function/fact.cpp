#include<iostream>
using namespace std;
int fac();
int main(){
fac();
return 0;
}
int fac(){
    int n,fact=1,i;
    cout<<"Enter the value of n=";
    cin>>n;
    for(i=0;i<=n;i++){
    fact=fact*n;
    i--;
    }
    cout<<fact;
    
    return 0;
}