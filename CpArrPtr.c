/* Copying an array using pointers */
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr = arr; //pointing to the first element of the array
    int CpArr[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        *(CpArr+i) = *(arr+i); //copying the elements of arr to CpArr using pointer arithmetic
        ptr++;
    }
    printf("The copied array is: ");
    for(int i=0;i<len;i++)
    {
        printf("%d ", CpArr[i]);
    }
}