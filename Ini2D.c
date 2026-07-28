/* Accessing elements of a 2D array using pointer arithmetic */
#include<stdio.h>
int main()
{
    int arr[2][3]={{2,3,4},{5,6,7}};
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            printf("%d ",*(*(arr+row)+col)); // using pointer arithmetic to access the elements of the 2D array
        }
    }
    return 0;
}