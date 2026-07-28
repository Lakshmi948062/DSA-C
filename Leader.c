#include <stdio.h>
void leaders(int arr[], int n) 
{
    int max = arr[n - 1];
    printf("%d ", max);
    for (int i = n - 2; i >= 0; i--) 
    {
        if (arr[i] > max)
        {
            max = arr[i];
            printf("%d ", max);
        }
    }
}
int main() 
{
    int arr[] = {16,17,4,3,5,2};
    int n = 6;
    leaders(arr, n);
    return 0;
}