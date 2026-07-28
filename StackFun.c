#include<stdio.h>
#define MAX 4
int stack[MAX];
int top=-1;
int main()
{
    push(10);
    display();
    push(20);
    display();
    push(30);
    display();
    push(40);
    display();
    push(50);
    display();
    pop();
    display();
    pop();
    display();
    peek();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    peek();
    return 0;
}
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    if(top==MAX-1)
    {
        return 1;
    }
    return 0;
}
void push(int val)
{
    if(isFull())
    {
        printf("The stack Overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top] = val;
        printf("The value that is added to the stack is: %d\n",val);
    }
}
void pop()
{
    if(isEmpty())
    {
        printf("The stcak is Empty\n");
        return;
    }
    else
    {
        printf("The poped element from the stack is: %d",stack[top]);
        top--;
    }
}
void peek()
{
    if(isEmpty())
    {
        printf("The stcak is Empty\n");
        return;
    }
    else
    {
        printf("The top most element of the stack is: %d",stack[top]);
    }
}
void display()
{
    if(isEmpty())
    {
        printf("The stcak is Empty\n");
        return;
    }
    else
    {
        printf("The stack elements are: \n");
        for(int i=top;i>=0;i--)
        {
            printf("| %d |\n",stack[i]);
        }
    }
}