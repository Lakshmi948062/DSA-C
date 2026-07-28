#include<stdio.h>
int main()
{
    int arr[5]={12,16,19,22};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int p=sizeof(arr)/sizeof(arr[0]);
    printf("\nThe length of the array is: %d\n",p);
    arr[4] = 45;
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}