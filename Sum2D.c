/* Sum of elements in a 2D array using pointers */
#include<stdio.h>
int main()
{
    int arr[2][2] = {{1,2},{5,6}};
    int sum = 0;
    int *ptr = &arr[0][0]; // pointer to the first element of the 2D array
    for(int i=0; i<4; i++)
    {
        sum += *ptr; 
        ptr++; 
    }
    printf("The sum of the elements in the 2D array is: %d", sum);
    return 0;
}