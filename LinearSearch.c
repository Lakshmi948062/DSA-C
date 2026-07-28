#include<stdio.h>
int main()
{
    int key,n,i,arr[5];
    printf("Enter the total number of tickets:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the ticket number %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The ticket numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the ticket number to be searched:\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("The ticket number %d is found at position %d\n",key,i+1);
            printf("Congratulations!You have won the lottery\n");
        }
    }
    if(i==n)
    {
        printf("Sorry the ticket number %d is not there.Better luck next time!\n",key);
    }
    return 0;
}