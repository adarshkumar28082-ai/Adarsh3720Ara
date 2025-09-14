#include<stdio.h>
int sum();
int main(){
    sum();
}
int sum(){
    int n,sum=0,remi;
    printf("Enter the value of integer=");
    scanf("%d",&n);
    while(n>0){
        remi=n%10;
        sum=sum+remi;
        n=n/10;
    }
    printf(" sum of digit=%d", sum);
    return 0;
}