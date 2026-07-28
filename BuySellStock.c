#include<stdio.h>
int BuySellStock(int arr[],int n);
int main()
{
    int arr[] = {7,5,2,1}; //{1,4,8,2},{}
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = BuySellStock(arr,n);
    printf("Profit:%d",result);
    return 0;
}
int BuySellStock(int arr[],int n)
{
    int minProfit = arr[0];
    int maxProfit = 0;
    if(n<2)
    {
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]<minProfit)
        {
            minProfit = arr[i];
        }
        else if(arr[i] - minProfit > maxProfit)
        {
            maxProfit = arr[i] - minProfit;
        }
    }
    return maxProfit;
}
