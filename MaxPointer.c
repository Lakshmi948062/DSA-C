/* Finding the maximum element in an array using pointers */
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,77,22,33,44,55,66};
    int *ptr = arr; // pointer to the first element of the array
    int max = *ptr; // initialize max with the first element of the array
    for(int i=0; i<11; i++)
    {
        if(*ptr > max)
        {
            max = *ptr;
        }
        ptr++;
    }
    printf("The maximum element in the array is: %d", max);
    return 0;
}