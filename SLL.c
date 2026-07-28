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

struct Node* createNodeEnd(struct Node* head,int val)
{
    struct Node* newNode=createNode(val);
    if(head==NULL)
        return newNode;
    struct Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    return head;
}

struct Node* createNodeAfter(struct Node* head,int after,int val)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->data!=after)
        temp=temp->next;
    if(temp!=NULL)
    {
        struct Node* newNode=createNode(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}

struct Node* createNodeBefore(struct Node* head,int before,int val)
{
    struct Node* newNode=createNode(val);
    if(head==NULL)
        return head;
    if(head->data==before)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    struct Node* temp=head;
    while(temp->next!=NULL && temp->next->data!=before)
        temp=temp->next;
    if(temp->next!=NULL)
    {
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
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

struct Node* deleteFirst(struct Node* head)
{
    if(head==NULL)
        return NULL;
    struct Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

struct Node* deleteLast(struct Node* head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    struct Node* temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    free(temp->next);
    temp->next=NULL;
    return head;
}

struct Node* deleteAfter(struct Node* head,int after)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->data!=after)
        temp=temp->next;
    if(temp!=NULL && temp->next!=NULL)
    {
        struct Node* del=temp->next;
        temp->next=del->next;
        free(del);
    }
    return head;
}

struct Node* deleteBefore(struct Node* head,int before)
{
    if(head==NULL || head->next==NULL)
        return head;
    if(head->next->data==before)
    {
        struct Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    struct Node* prev=NULL;
    struct Node* curr=head;
    while(curr->next!=NULL && curr->next->data!=before)
    {
        prev=curr;
        curr=curr->next;
    }
    if(prev!=NULL)
    {
        prev->next=curr->next;
        free(curr);
    }
    return head;
}

struct Node* delete(struct Node* head, int val)
{
    struct Node* temp = head;
    if(temp -> next ==val)
    {
        return temp->next;
    }
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }
}
int main()
{
    struct Node* head=NULL;
    head=createNodeStart(head,67);
    head=createNodeStart(head,89);
    head=createNodeStart(head,100);
    head=createNodeStart(head,120);
    head=createNodeStart(head,130);
    head=createNodeEnd(head,150);
    printf("List : ");
    displaySLL(head);
    head=deleteFirst(head);
    printf("After deleting first: ");
    displaySLL(head);
    head=deleteLast(head);
    printf("After deleting last: ");
    displaySLL(head);
    head=deleteAfter(head,89);
    printf("After deleting after 89: ");
    displaySLL(head);
    head=deleteBefore(head,67);
    printf("After deleting before 67: ");
    displaySLL(head);
    return 0;
}