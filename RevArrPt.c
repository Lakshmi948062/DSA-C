/* Reversing an Array using Pointers */
#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int revArr[5];
    int *ptr = &arr[4]; // pointer to the last element of the original array
    for(int i=0; i<5; i++)
    {
        revArr[i] = *ptr;
        ptr--; 
    }
    printf("The reversed array is: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", revArr[i]);
    }
    return 0;
}