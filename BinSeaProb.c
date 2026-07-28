#include<stdio.h>
int main()
{
    int n,i,arr[10],target;
    printf("Enter the total number jails in Humayun's Place:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the jail number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the clue given by Humayun:\n");
    scanf("%d",&target);
    int low=0;
    int high=n-1;
    int mid;
    int found=0;
    while(low<=high)
    {
        mid =(low + high)/2 ;
        if(arr[mid] == target)
        {
            found=1;
            printf("Hurray!The King rescued the Queen\n");
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
    if(!found)
    {
        printf("The King has been fooled by Humayun\n");
    }
    return 0;
}