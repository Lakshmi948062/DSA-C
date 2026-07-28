#include <stdio.h>
int maxSubArraySum(int arr[], int n) 
{
    int max = arr[0];
    int curr_sum = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (curr_sum + arr[i] > arr[i])
        {
            curr_sum = curr_sum + arr[i];
        }
        else
        {
            curr_sum = arr[i];
        }
        if (curr_sum > max)
        {
            max = curr_sum;
        }
    }
    return max;
}
int main() 
{
    int arr[] = {4,-2,-3,7,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, n);
    printf("Maximum Subarray Sum = %d\n", max_sum);
    return 0;
}