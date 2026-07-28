#include<stdio.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    sum(arr);
    return 0;
}
void sum(int *arr[3])
{
    for(int i=0 ; i<3 ;i++)
    {
        int RowSum = 0;
        int ColSum = 0;
        for(int j=0 ; j<3 ;j++)
        {
            RowSum += *(*(arr+i)+j);
            ColSum += *(*(arr+j)+i);
        }
        printf("The sum of row %d is: %d\n", i+1, RowSum);
        printf("The sum of column %d is: %d\n", i+1, ColSum);
    }
}