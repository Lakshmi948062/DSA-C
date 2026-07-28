/* Pointer to 2D Array */
#include<stdio.h>
int main()
{
    int arr[3][3]  = {{1,2,3},{4,5,6},{7,8,10}};
    printf("%d ",*(*(arr)));
    printf("%d ",*(*(arr)+1));
    printf("%d ",*(*(arr)+2));

    printf("\n%d ",*(*(arr+1)));
    printf("%d ",*(*(arr+1)+1));
    printf("%d ",*(*(arr+1)+2));

    printf("\n%d ",*(*(arr+2)));
    printf("%d ",*(*(arr+2)+1));
    printf("%d ",*(*(arr+2)+2));
    return 0;
}