#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};

int main(){
    struct Node*head=NULL;
    struct Node*newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=10;
    newNode->next=NULL;
    head=newNode;

    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=20;
    newNode->next=NULL;
    head->next=newNode;

    struct Node *temp=head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    return 0;
}