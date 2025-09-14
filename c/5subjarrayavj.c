#include<stdio.h>
int main(){
    int marks[5];
    int i;
    float sum=0,avj;
    printf("Enter the 5 subject marks=\n");
    for(i=0;i<5;i++){
        printf("Subject:-%d=",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    avj=sum/5;
    printf("Total marks=%.2f\n",sum);
    printf("averaje=%.2f", avj);
    return 0;
}