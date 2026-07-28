/* Reversing an Array */
#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int revArr[5]; // array to store the reversed elements
    for(int i=0; i<5; i++)
    {
        revArr[i] = arr[4-i]; // assign the elements in reverse order
    }
    printf("The reversed array is: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", revArr[i]);
    }
    return 0;
}