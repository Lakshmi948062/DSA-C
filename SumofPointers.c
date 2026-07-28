/* Sum of elements in an array using pointers */
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int *ptr = arr; // pointer to the first element of the array
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        sum += *ptr; // add the value pointed by ptr to sum
        ptr++; // move the pointer to the next element
    }
    printf("The sum of the elements in the array is: %d", sum);
    return 0;
}