#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int upend(struct node **B, int num );
//int deletatupend(struct node *B);
int Addbing(struct node **B,int num);
int Addafter(struct node *B,int loc, int num);
int display(struct node *A);
void  deletupend(struct node *B);
int display(struct node *A);
void deletaddbing(struct node *B);
int display(struct node *A);
int count(struct node *A);
int main(){
    struct node *A=NULL;
    upend(&A,900);
    Addbing(&A,300);
    // Addbing(&A,200);
    // Addbing(&A,100);
    Addafter(A,2,40);
    // Addafter(A,3,50);
    display(A);
    deletupend(A);
    display(A);
    deletaddbing(A);
    display(A);
    printf("Total Element:-%d",count(A));
    return 0;
}
int upend(struct node **B, int num ){
struct node *temp,*r;
temp=*B;
if(temp==NULL){
    temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;
    *B=temp;
}
else{
    while(temp->link!=NULL){
        temp=temp->link;
    }
    r=malloc(sizeof(struct node));
    r->data=num;
    r->link=NULL;
    temp->link=r;
}
    return 0;
}
void deletupend(struct node *B){
    if(B==NULL) return;
    struct node *temp=B, *prev=NULL;
    while(temp->link!=NULL){
        prev=temp;
        temp=temp->link;
    }
    if(prev!=NULL)prev->link=NULL;
    else B=NULL;
    free(temp);
}
int Addbing(struct node **B,int num){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->link=*B;
    *B=temp;
    return 0;
}
void deletaddbing(struct node *B){
    if(B==NULL) return;
    struct node *temp=B;
    B=B->link;
    free(temp);
}
int Addafter(struct node *B,int loc, int num ){
    struct node *temp=B,*r;
    int i;
    for(i=1;i<loc;i++){
        temp=temp->link;
    }
    if(temp==NULL){
        printf("located=%d\n",loc);
    }
    else{
        r=malloc(sizeof(struct node));
        r->data=num;
        r->link=temp->link;
        temp->link=r;
    }
    return 0;
    
}
int display(struct node *A){
    while(A!=NULL){
        printf("%d ->",A->data);
        A=A->link;
    }
    printf("NULL\n");
    return 0;
}
int count(struct node *A){
    int c=0;
    while(A!=NULL){
        A=A->link;
        c++;
    }
    return c;
}