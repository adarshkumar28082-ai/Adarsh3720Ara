#include<iostream>
#define pi 3.14
using namespace std;
int main(){
    int r,area,circumferance;
    cout<<"Enter the Ridus=";
    cin>>r;
    area=pi*r*r;
    circumferance=2*pi*r;
    cout<<"Area of circle="<<area<<endl;
    cout<<"circumferance of circle="<<circumferance;
    return 0;

}