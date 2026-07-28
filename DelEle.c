#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
struct Node* createFirst(struct Node* head,int val)
{
    struct Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}
struct Node* Delete(struct Node* head,int val)
{
    if(head == NULL)
        return NULL;
    struct Node *temp = head;
    struct Node *prev = NULL;
    if(temp->data == val)
    {
        head = temp->next;
        free(temp);
        return head;
    }
    while(temp != NULL && temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL)
    {
        prev->next = temp->next;
        free(temp);
    }
    return head;
}
void display(struct Node* head)
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node* head=NULL;
    head = createFirst(head,5);
    head = createFirst(head,4);
    head = createFirst(head,3);
    head = createFirst(head,2);
    head = createFirst(head,1);
    display(head);
    head = Delete(head,2);
    display(head);
    return 0;
}