#include<iostream>
using namespace std;
int main(){
    int rect,tring,squar,l,b,s;
    cout<<"Enter the value of Side=";
    cin>>s;
    cout<<"Enter the value of length=";
    cin>>l;
    cout<<"Enter the value of Breadth=";
    cin>>b;
    rect=l*b;
    tring=0.5*l*b;
    squar=s*s;
    cout<<"Area of rectangle="<<rect<<endl;
    cout<<"Area of tringle="<<tring<<endl;;
    cout<<"Area of Square="<<squar<<endl;
    return 0;
}