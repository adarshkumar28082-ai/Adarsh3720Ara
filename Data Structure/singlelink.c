#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head ,*newnode, *temp;
void create (){
    int ch=1;

while(ch){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the no:-");
    scanf("%d",&newnode->data);
    newnode->link=0;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->link=newnode;
        temp=newnode;
    }
    printf("do you want to continou press 1 and 0 for exit:");
    scanf("%d",&ch);
}
}
void display(){
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
void insertatbeginning(){
    if(head==0){
        printf("list is empty=");

    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data=");
        scanf("%d",&newnode->data);
        newnode->link = head;
        head=newnode;
    }
}
    void insertatend(){
    if(head==0){
        printf("list is empty=");

    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data=");
        scanf("%d",&newnode->data);
        newnode->link = head;
        head=newnode;
    }
}
void insertatspecificposition(){
    if(head==0){
        printf("list is empty:-");
    }
    else{
        int pos;
        int c=0;
        temp=head;
        while(temp!=0){
            temp=temp->link;
            c++;
        }
        printf("Enter the no:-");
        scanf("%d",&pos);
        if(pos<0||pos<c){
            printf("invallid pos:-");
        }
    }

}
int count(){
    int c=0;
    temp=head;
    while(temp!=0){
        c++;
        temp=temp->link;
    }
    printf("no of node in link list is=%d",c);
    return c;
}
void dltfrombeg(){
    if(head==NULL){
        printf("list is empty:-");
    }
    else{
        temp=head;
        head=head->link;
        free(temp);
        printf("node deleted:-");

    }
}
void deletfromspecificposition() {
    int pos, i = 1;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos <= 0 || head == NULL) {
        printf("Invalid position or list is empty.\n");
        return;
    }
    struct node *temp = head, *prev = NULL;
    if(pos == 1) {
        head = head->link;
        free(temp);
        printf("Node deleted at position 1.\n");
        return;
    }
    while(temp != NULL && i < pos) {
        prev = temp;
        temp = temp->link;
        i++;
    }
    if(temp == NULL) {
        printf("Position out of range.\n");
        return;
    }
    prev->link = temp->link;
    free(temp);
    printf("Node deleted at position %d.\n", pos);
}
void reversthelist() {
    struct node *prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL) {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printf("List reversed.\n");
}
int main(){
    int choice,option=1;
    while(option){
        printf("\n 1.create:-");
        printf("\n 2.display:-");
        printf("\n 3.insertatbeg:-");
        printf("\n 4.insertated:-");
        printf("\n 5.cout:-");
        printf("\n 6.insertatspecificpos:-");
        printf("\n 7.dltfrombeg:-");
        printf("\n 8.dltfromspecificpos:-");
        printf("\n 9.reversethelist:-");
        printf("\n 10.exit:-");
        scanf("%d",&choice);
        switch(choice){
            case 1: create();
            break;
            case 2: display();
            break;
            case 3: insertatbeginning();
            break;
            case 4: insertatend();
            break;
            case 5: count();
            break;
            case 6: insertatspecificposition();
            break;
            case 7: dltfrombeg();
            break;
            case 8: deletfromspecificposition();
            break;
            case 9: reversthelist();
            break;
            case 10: exit(0);
            default: printf("run choise:-");


        }
    }


    
    return 0;
}