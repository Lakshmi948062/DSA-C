/* Even Elements in an Array using Pointer */
#include<stdio.h>
int main()
{
    int arr[7]={2,3,4,7,9,12,16,20};
    int count=0;
    int *ptr = arr; // pointer to the first element of the array
    printf("The even elements in the array are: ");
    for(int i=0; i<7; i++)
    {
        if(*ptr % 2 == 0) // check if the element pointed by ptr is even
        {
            printf("%d ", *ptr); // print the even element
            count++;
        }
        ptr++; // move the pointer to the next element
    }
    printf("\nThe count of even elements is: %d", count);
    return 0;
}