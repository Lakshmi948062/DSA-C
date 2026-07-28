#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode -> data = val;
    newNode -> next = NULL;
    return newNode;
}
struct Node* createNodeStart(struct Node* head,int val)
{
    struct Node* newNode = createNode(val);
    newNode -> next = head;
    head = newNode;
    return head;
}
struct Node* createNodeEnd(struct Node* head,int val)
{
    struct Node* newNode = createNode(val);
    if(head == NULL)
    {
        return newNode;
    }
    struct Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void BubbleSort(struct Node* head)
{
    struct Node* i;
    struct Node* j;
    int temp;
    for(i = head;i!=NULL;i=i->next)
    {
        for(j=head;j->next!=NULL;j=j->next)
        {
            if(j->data > j->next->data)
            {
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
    }
}
void display(struct Node* head)
{
    if(head == NULL)
    {
        printf("The list is empty\n");
        return;
    }
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head = NULL;
    printf("The elements that are inserted at front: \n");
    head = createNodeStart(head,10);
    head = createNodeStart(head,19);
    head = createNodeStart(head,18);
    head = createNodeStart(head,17);
    display(head);
    printf("The elements after inserted at end: \n");
    head = createNodeEnd(head,11);
    head = createNodeEnd(head,9);
    head = createNodeEnd(head,5);
    display(head);
    printf("After the Bubblesort:\n");
    BubbleSort(head);
    display(head);
    return 0;
}