#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insert_end(int val){
    struct Node* newnode=malloc(sizeof(struct Node));
    newnode->data=val; newnode->next=NULL;
    if(!head){head=newnode;return;}
    struct Node* temp=head;
    while(temp->next)temp=temp->next;
    temp->next=newnode;
}

void reverse(){
    struct Node *prev=NULL,*curr=head,*next=NULL;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

void display(){
    struct Node* temp=head;
    while(temp){printf("%d ",temp->data); temp=temp->next;}
    printf("\n");
}

int main(){
    insert_end(10); insert_end(20); insert_end(30); insert_end(40);
    reverse();
    display();
    return 0;
}
