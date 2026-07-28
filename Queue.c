#include<stdio.h>
#define MAX 100
int queue[MAX];
int rear =-1;
int front =-1;
int main()
{
    enqueue(10);
    display();
    enqueue(15);
    display();
    enqueue(20);
    display();
    peek();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}
int enqueue(int val)
{
    if(isFull())
    {
        printf("The queue is Full\n");
        return;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear] = val;
        printf("The value that is added in the queue is:%d\n",val);
    }
}
void display()
{
    if(isEmpty())
    {
        printf("The Queue is Empty");
        return;
    }
    else
    {
        printf("The elements that are present in the queue is: \n");
        for(int i=front;i<=rear;i++)
        {
            printf(" %d ",queue[i]);
        }
        printf("\n");
    }
}
int isFull()
{
    if(rear ==MAX-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty()
{
    if(front==-1 || front>rear)
    {
        return 1;
    }
    return 0;
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
        printf("The top most element in the queue is: %d\n",queue[rear]);
    }
}
void dequeue()
{
    if(isEmpty())
    {
        printf("The queue is empty\n");
        return;
    }
    else
    {
        printf("The dequed element is: %d\n",queue[front]);
        front++;
    }
}