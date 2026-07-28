#include<stdio.h>
#include<stdlib.h>
struct Node* front = NULL;
struct Node* rear = NULL;
struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data =val;
    newNode -> next = NULL;
    return newNode;
}

void enqueue(int val)
{
    struct Node* newNode = createNode(val);
    if(front==NULL)
    {
        front = rear = newNode;
        return;
    }
    rear -> next = newNode;
    rear = newNode;
}
void dequeue()
{ 
    struct Node*  temp = front;
    if(isEmpty())
    {
        printf("The Queue is Empty\n");
        return;
    }
    printf("The element that is dequeued from the queue is: %d\n",front->data);
    front=front->next;
    if(front == NULL)
    {
        rear = NULL;
    }
    free(temp);
}
void display()
{
    struct Node* temp = front;
    if(isEmpty())
    {
        printf("The Queue is Empty\n");
        return;
    }
    else
    {
        printf("The elements that are present in the queue is: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }   
    printf("\n");
}
void peek()
{
    if(isEmpty())
    {
        printf("The Queue is Empty\n");
        return;
    }
    else
    {
        printf("The top most element of the queue is:%d\n",rear->data);
    }
}
int isEmpty()
{
    if(front==NULL)
    {
        return 1;
    }
    return 0;
}
int main()
{
    printf("The Enqueue operation:\n");
    enqueue(10);
    display();
    enqueue(20);
    display();
    enqueue(30);
    display();
    enqueue(40);
    display();
    dequeue();
    display();
    peek();
    printf("The Dequeue operation:\n");
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
}