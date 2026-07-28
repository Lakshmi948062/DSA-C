 #include <stdio.h>
int LRSum(int arr[], int n) 
{
    int total = 0, left = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    for (int i = 0; i < n; i++) {
        total -= arr[i];
        if (left == total)
            return i;
        left += arr[i];
    }
    return -1;
}
int main() 
{
    int arr[] = {1,3,5,2,2};
    int n = 5;
    printf("%d", LRSum(arr, n));
    return 0;
}