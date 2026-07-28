#include<stdio.h>

int main()
{
    int n,arr[100],mid;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int low = 0;
    int high = n-1;
    mid = (low+high)/2;

    if(n==1)
        printf("Middle element: %d",arr[0]);

    else if(n%2==0)
        printf("Middle element: %d",arr[mid+1]);

    else
        printf("Middle element: %d",arr[mid]);

}