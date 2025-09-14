#include<iostream>
using namespace std;
int main(){
    int n,orig,rev=0,remi;
    cout<<"Enter the value of n=";
    cin>>n;
    orig=n;
    while(n!=0){
        remi=n%10;
        rev=rev*10+remi;
        n=n/10;
    }
    if(orig==rev){
        cout<<"is a palliodrem number"<<endl;
    }
    else{
        cout<<"is not a palliodrem number"<<endl;
    }
    return 0;
}