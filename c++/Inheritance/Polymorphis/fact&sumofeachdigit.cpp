#include<iostream>
using namespace std;
int A(int n,int remi, int sum);
int A(int n1,int fact);
int main(){
int n,n1,remi,sum,fact;
A(n,remi,sum);
A(n1,fact);
}
int A(int n,int remi, int sum){
cout<<"Enter the value of n=";
cin>>n;
sum=0;
while(n>0){
   remi=n%10;
   sum=sum+remi;
   n=n/10;
}
cout<<"sum of each digit="<<sum<<endl;

}
int A(int n1,int fact){
   cout<<"Enter the integer=";
   cin>>n1;
   fact=1;
   while(n1>0){
      fact=fact*n1;
      n1--;
   }
   cout<<"factor of given integer="<<fact;
   return 0;
}
