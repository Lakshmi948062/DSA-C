#include<stdio.h>
int main()
{
    int sum = 0,n,i,arr[20];
    float mean;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    mean = sum/n;
    printf("The mean of the array is %.2f\n",mean);
    return 0;
}