#include<stdio.h>
int main()
{
    int n,nums[100];
    printf("Enter the total number of elements in the list:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    printf("The second smallest element in an array is:%d\n",nums[1]);
    return 0;
}