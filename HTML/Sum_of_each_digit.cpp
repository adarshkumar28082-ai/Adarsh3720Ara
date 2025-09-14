#include<iostream>
using namespace std;
class sum 
{
private:
    int a,b,c;
public:
  sum(){
    a=5,b=10;
c=a+b;
    cout<<"add="<<c<<endl;
    c=a*b;
    cout<<"mult="<<c<<endl;
    c=a/b;
    cout<<"div="<<c<<endl;
c=a-b;
cout<<"sub="<<c;
}
};
int main(){
    sum  obj;
    return 0;
}