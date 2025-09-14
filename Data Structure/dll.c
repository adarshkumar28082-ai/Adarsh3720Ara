#include<stdio.h>
#include<stdlib.h>
struct dnode{
    struct dnode *pre;
    int data;
    struct dnode *next;
};
int addbing(struct dnode **B,int num);
int display(struct dnode *B);
int main(){
    struct dnode *A=NULL;
    //upend(&A,900);
    addbing(&A,100);
    addbing(&A,200);
    addbing(&A,300);
    display(A);
    return 0;
}
int addbing(struct dnode **B,int num){
    struct dnode *temp;
    temp=malloc(sizeof(struct dnode));
    temp->pre=NULL;
    temp->data=num;
    temp->next=*B;
    if(*B!=NULL)
    (*B)->pre=temp;
    *B=temp;

    return 0;
}
int display(struct dnode *B){
    while(B!=NULL){
        printf("Element of %d<----->",B->data);
        B=B->next;
    }
    return 0;
}