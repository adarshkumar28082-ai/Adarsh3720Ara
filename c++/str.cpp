#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[10],str1[10];
    cout<<"Enter the 1st string=";
    cin>>str;
    strcpy(str1,str);
    strrev(str1);
    if(strcmp(str,str1)==0){
        cout<<"pallindrom";
    }
    else{
        cout<<"not pallindrom";
    }
    return 0;
}