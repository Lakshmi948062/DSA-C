#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int val)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}
struct Node* createNodeStart(struct Node* head,int val)
{
    struct Node* newNode=createNode(val);
    newNode->next=head;
    head=newNode;
    return head;
}
struct Node* reverse(struct Node* head)
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = NULL;
    while (curr != NULL) 
    {
        next = curr->next;   
        curr->next = prev;   
        prev = curr;         
        curr = next;
    }
    return prev;
}

void displaySLL(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* head=NULL;
    head=createNodeStart(head,67);
    head=createNodeStart(head,89);
    head=createNodeStart(head,100);
    head=createNodeStart(head,120);
    head=createNodeStart(head,130);
    printf("List : ");
    displaySLL(head);
    head = reverse(head);
    printf("Reversed List : ");
    displaySLL(head);
    return 0;
}