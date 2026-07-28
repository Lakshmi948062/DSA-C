#include<stdio.h>
int main()
{
    int arr[5]={24,35,46,57,67};
    int target = 57;
    int count =0;
    for(int i=0;i<5;i++)
    {
        if(target == arr[i])
        {
            printf("The target element found at the position : %d",i);
            break;
        }
    }
    return 0;
}