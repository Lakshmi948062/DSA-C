#include<stdio.h>
int main()
{
    int arr[5]={12,16,19,22};
    int pos=2;
    int ele=45;
    for(int i=4;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}