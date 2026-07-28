#include<stdio.h>
int main()
{
    int arr[]={40,60,80,50,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int avg = sum/n;
    printf("Average:%d\n",avg);
    printf("Below Average: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<avg)
        {
           printf("%d ",arr[i]);
        }
    }
}