#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node  {
    int data;
    struct node *link;
};
void main(){
    struct node *a=NULL;
    addbign(&a,10);
    addbign(&a,30);
    addbign(&a,40);
    addbign(&a,70);
    display(a);
    printf("%d",count(a));
}
void addbign(struct node **k,int num){
    struct node *temp;
    temp=malloc(sigeof(struct node));
    temp->data=num;
    temp->link=*k;
    *k=temp;
}
void display(struct node *k){
    while(k!=NULL){
        printf("%d",r->data);
    }
    r=r->link;
}
void count(struct node *k){
    int c;
    
}