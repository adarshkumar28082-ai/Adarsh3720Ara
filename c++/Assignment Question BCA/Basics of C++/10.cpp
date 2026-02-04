#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int si,p,r,t,ci,a;
 cout<<"Enter the value of p=";
 cin>>p;
 cout<<"Enter the value of r=";
 cin>>r;
 cout<<"Enter the value of t=";
 cin>>t;
 si=(p*r*t)/100;
 cout<<"Simple interest="<<si<<endl;
 ci=p*pow((1+r/100),t);
 cout<<"Compound interest="<<ci<<endl;
 return 0; 
}