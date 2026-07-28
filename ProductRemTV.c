#include<stdio.h>
int main()
{
    int arr[] = {7,5,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++)
    {
        int product = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product *= arr[j];
            }
        }
        printf("%d ", product);
    }
    return 0;
}