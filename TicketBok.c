#include<stdio.h>
int main()
{
    int seats = 3;
    int arr[] = {1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(seats!=0)
        {
            printf("Booked\n");
            seats--;
        }
        else
        {
            printf("Waiting\n");
        }
    }
    return 0;
}