#include<stdio.h>
int main()
{
    int prices[] = {200,800,1200};
    int n = sizeof(prices)/sizeof(prices[0]);
    for(int i=0;i<n;i++)
    {
        if(prices[i]>200 && prices[i]<=800)
        {
            prices[i]*=0.9;
        }
        else if(prices[i]>800 && prices[i]<=1200)
        {
            prices[i]*=0.8;
        }
    }
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d",prices[i]);
        if(i!=n-1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}