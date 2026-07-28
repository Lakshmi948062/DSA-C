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

struct Node* createFirstNode(struct Node* head,int val)
{
    struct Node* newNode=createNode(val);
    head=newNode;
    newNode->next=head;
    return head;
}

struct Node* insertEnd(struct Node* head,int val)
{
    struct Node* newNode=createNode(val);

    if(head==NULL)
    {
        head=newNode;
        newNode->next=head;
        return head;
    }
    struct Node* temp=head;
    while(temp->next!=head)
        temp=temp->next;

    temp->next=newNode;
    newNode->next=head;
    return head;
}

struct Node* insertStart(struct Node* head,int val)
{
    struct Node* newNode=createNode(val);

    if(head==NULL)
    {
        head=newNode;
        newNode->next=head;
        return head;
    }

    struct Node* temp=head;
    while(temp->next!=head)
        temp=temp->next;

    temp->next=newNode;
    newNode->next=head;
    head=newNode;
    return head;
}
struct Node* insertAfter(struct Node* head,int after,int val)
{
    struct Node* temp=head;
    while(temp->data!=after)
        temp=temp->next;
    struct Node* newNode=createNode(val);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}
struct Node* insertBefore(struct Node* head,int before,int val)
{
    struct Node* temp=head;
    struct Node* prev=NULL;
    while(temp->data!=before)
    {
        prev=temp;
        temp=temp->next;
    }
    struct Node* newNode=createNode(val);
    newNode->next=temp;
    if(prev!=NULL)
        prev->next=newNode;
    else
        head=newNode;
    return head;
}
struct Node* deleteEnd(struct Node* head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        free(head);
        return NULL;
    }
    struct Node* temp=head;
    while(temp->next->next!=head)
        temp=temp->next;
    free(temp->next);
    temp->next=head;
    return head;
}
struct Node* deleteStart(struct Node* head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        free(head);
        return NULL;
    }
    struct Node* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    struct Node* del=head;
    head=head->next;
    temp->next=head;
    free(del);
    return head;
}
struct Node* deleteAfter(struct Node* head,int after)
{
    struct Node* temp=head;
    while(temp->data!=after)
        temp=temp->next;
    struct Node* del=temp->next;
    temp->next=del->next;
    free(del);
    return head;
}
struct Node* deleteBefore(struct Node* head,int before)
{
    if(head==NULL || head->next==head)
        return head;
    if(head->data==before)
    {
        struct Node* temp=head;
        while(temp->next!=head)
            temp=temp->next;
        struct Node* del=head;
        head=head->next;
        temp->next=head;
        free(del);
        return head;
    }
    struct Node* prev=NULL;
    struct Node* curr=head;
    while(curr->next!=head && curr->next->data!=before)
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
    if(head==NULL)
        return NULL;
    struct Node* temp=head;
    struct Node* prev=NULL;
    while(temp->data!=val)
    {
        prev=temp;
        temp=temp->next;
        if(temp==head)
            return head; // Value not found
    }
    if(prev!=NULL)
        prev->next=temp->next;
    else
        head=temp->next; // Deleting the head node
    free(temp);
    return head;
}
struct Node* search(struct Node* head,int val)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
            return temp;
        temp=temp->next;
        if(temp==head)
            break; // Value not found
    }
    return NULL;
}

struct Node* display(struct Node* head)
{
    struct Node* found=search(head,18);
    if(found!=NULL)
        printf("Found: %d\n",found->data);
    else
        printf("Not Found\n");
}
int main()
{
    struct Node* head=NULL;
    head=createFirstNode(head,10);
    display(head);
    head=insertEnd(head,20);
    head=insertStart(head,5);
    head=insertAfter(head,10,15);
    head=insertBefore(head,20,18);
    head=deleteEnd(head);
    head=deleteStart(head);
    head=deleteAfter(head,10);
    head=deleteBefore(head,20);
    head=delete(head,15);
    return 0;
}