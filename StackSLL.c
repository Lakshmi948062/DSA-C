#include<stdio.h>
#include<stdlib.h>
struct Node* top=NULL;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next =NULL;
    return newNode;
}
void push(int val)
{
    struct Node* newNode = createNode(val);
    if(top==NULL)
    {
        top = newNode;
        return;
    }
    newNode -> next = top;
    top = newNode;
}
void display()
{
    struct Node* temp =top;
    while(temp!=NULL)
    {
        printf("| %d |\n",temp->data);
        temp = temp->next;
    }
}
void pop()
{
    struct Node* temp = top;
    if(top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    int popVal = temp->data;
    top = top->next;
    printf("Popped element: %d\n", popVal);
    free(temp);
}
void peek()
{
    if(top == NULL)
    {
        printf("The Stack Underflow\n");
    }
    else
    {
        printf("The top most element is: %d",top->data);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    peek();
    return 0;
}