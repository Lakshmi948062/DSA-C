#include<stdio.h>
int maxWater(int arr[], int n);
int main()
{
    int arr[] = {6,1,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = maxWater(arr, n);
    printf("%d",result);
    return 0;
}
int maxWater(int arr[], int n)
{
    int left = 0, right = n - 1;
    int max = 0;
    while(left < right)
    {
        int height = (arr[left] < arr[right]) ? arr[left] : arr[right];
        int width = right - left;
        int water = height * width;
        if(water > max)
        {
            max = water;
        }
        if(arr[left] < arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return max;
}