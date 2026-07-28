#include<stdio.h>
int check(int arr[],int n,int steal);
int main()
{
    int r,units,arr[10],n;
    printf("Enetr the number of pet rats in your house:\n");
    scanf("%d",&r);
    printf("Enter the number of units per rats:\n");
    scanf("%d",&units);
    printf("Enter the number of houses in your area:\n");
    scanf("%d",&n);
    printf("Enter the units available in each house:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int steal = r*units;
    printf("The total number of food that i need to steal is:%d\n",steal);
    int result = check(arr,n,steal);
    printf("%d",result);
    return 0;
}
int check(int arr[],int n,int steal)
{
    if(n==0)
    {
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=steal)
        {
            return i+1;
        }
    }
}