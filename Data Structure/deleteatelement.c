#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtEnd(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void deleteAtBeginning() {
    if(head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtEnd() {
    if(head == NULL) return;
    struct Node* temp = head, *prev=NULL;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    if(prev != NULL) prev->next = NULL;
    else head = NULL;
    free(temp);
}

void deleteAtPosition(int pos) {
    if(head == NULL) return;
    struct Node* temp = head;
    if(pos == 0) {
        head = head->next;
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    for(int i=0; i<pos && temp!=NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

void display() {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    display();
    deleteAtBeginning();
    display();
    deleteAtEnd();
    display();
    deleteAtPosition(0);
    display();
    return 0;
}