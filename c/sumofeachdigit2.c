#include<stdio.h>
int sum();
int main(){
    int a;
    a=sum();
    printf("%d",a);
}
int sum(){
    int n,sum=0,remi,i;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        remi=n%10;
        sum=sum+remi;
        n=n/10;
        n++;
    }
    return sum;
}