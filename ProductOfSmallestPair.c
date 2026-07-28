#include<stdio.h>
int checkCondition(int arr[],int n,int d);
int main()
{
    int arr[] = {10,50,2,8,4};
    int d = 40;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = checkCondition(arr,n,d);
    printf("%d",result);
    return 0;
}
int checkCondition(int arr[],int n,int d)
{
    if(n < 2)
    {
        return -1;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(arr[0] + arr[1] < d)
    {
        return arr[0] * arr[1];
    }
    else
    {
        return 0;
    }
}