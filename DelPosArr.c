#include<stdio.h>
int main()
{
    int arr[5]={12,16,15,19,22};
    int pos=2;
    int ele=45;
    for(int i=pos;i<5;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}