/* Pointer to 2D Array */
#include<stdio.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(arr+i)+j)); // using pointer arithmetic to access the elements of the 2D array
        }
    }
    return 0;
}