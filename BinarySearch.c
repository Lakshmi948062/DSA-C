#include<stdio.h>
int main()
{
    int arr[7]={24,35,46,57,67,78,98};
    int target = 57;
    int low=0;
    int high=6;
    int mid;
    while(low<=high)
    {
        int mid = low + (high -low) /2 ;
        if(arr[mid] == target)
        {
            printf("The target found at the mid index: %d", mid);
            break;
        }
        else if(arr[mid] < target)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return 0;
}