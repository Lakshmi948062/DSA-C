/* Array Size and Length */
#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    printf("The size of the array is: %d", sizeof(a)); // size of the whole array
    int len = sizeof(a)/sizeof(a[0]); // size of the whole array / size of one element
    printf("\nThe length of the array is: %d", len);
    for(int i=0; i<len; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}