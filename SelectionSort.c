#include<stdio.h>
int main()
{
    int n,arr[19],i,j,temp,min;
    printf("Enter the total number of elememts in the list:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%2d",arr[i]);
    }
    return 0;
}