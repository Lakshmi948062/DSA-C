#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int val)
{
    if(top==(MAX-1))
    {
        printf("The stack overflow condition");
        return 0;
    }
    else
    {
        top++;
        stack[top] = val;
        printf("The value the is added to satck is: %d\n",val);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nThe stack underflow condition occurs\n");
        return 0;
    }
    else
    {
        printf("The poped element is: %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("The stack is empty\n");
        return 0;
    }
    else
    {
        printf("The elements that are present in the stack are: \n");
        for(int i=top;i>=0;i--)
        {
            printf("|%d|\n",stack[i]);
        }
    }
}
void peek()
{
    if(top==-1)
    {
        printf("The stack is empty\n");
        return 0;
    }
    else
    {
        printf("The top most elements is: %d\n",stack[top]);
    }
}
int main()
{
    
    pop();
    peek();
    return 0;
}