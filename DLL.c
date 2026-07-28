#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int val)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node)); //
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
struct Node* createNodeStart(struct Node* head,int val)
{
    struct Node* newNode=createNode(val);
    if(head!=NULL)
    {
        newNode->next=head;
        head->prev=newNode;
    }
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
    newNode->prev=temp;
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
        newNode->prev=temp;
        if(temp->next!=NULL)
            temp->next->prev=newNode;
        temp->next=newNode;
    }
    return head;
}
struct Node* createNodeBefore(struct Node* head,int before,int val)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->data!=before)
        temp=temp->next;
    if(temp!=NULL)
    {
        struct Node* newNode=createNode(val);
        newNode->next=temp;
        newNode->prev=temp->prev;
        if(temp->prev!=NULL)
            temp->prev->next=newNode;
        else
            head=newNode;
        temp->prev=newNode;
    }
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
        if(del->next!=NULL)
            del->next->prev=temp;
        free(del);
    }
    return head;
}
struct Node* deleteBefore(struct Node* head,int before)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->data!=before)
        temp=temp->next;
    if(temp!=NULL && temp->prev!=NULL)
    {
        struct Node* del=temp->prev;
        temp->prev=del->prev;
        if(del->prev!=NULL)
            del->prev->next=temp;
        else
            head=temp;
        free(del);
    }
    return head;
}
struct Node* delete(struct Node* head, int val)
{
    struct Node* temp = head;
    while(temp != NULL && temp->data != val)
        temp = temp->next;
    if(temp != NULL)
    {
        if(temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;
        if(temp->next != NULL)
            temp->next->prev = temp->prev;
        free(temp);
    }
    return head;
}
struct Node* deleteEnd(struct Node* head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    struct Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->prev->next=NULL;
    free(temp);
    return head;
}
struct Node* deleteStart(struct Node* head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    struct Node* temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    return head;
}
struct Node* search(struct Node* head,int val)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->data!=val)
        temp=temp->next;
    return temp;
}
struct Node* display(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    printf("\n");
}
int main()
{
    struct Node* head=NULL;
    head=createNodeEnd(head,10);
    head=createNodeEnd(head,20);
    head=createNodeEnd(head,30);
    display(head);
    head=createNodeStart(head,5);
    display(head);
    head=createNodeAfter(head,20,25);
    display(head);
    head=createNodeBefore(head,10,7);
    display(head);
    head=deleteAfter(head,20);
    display(head);
    head=deleteBefore(head,10);
    display(head);
    head=delete(head,30);
    display(head);
    head=deleteEnd(head);
    display(head);
    head=deleteStart(head);
    display(head);
    return 0;
}