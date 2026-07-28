/* Reversing an array using pointers */
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr1=arr;
    int *ptr2=arr+len-1;
    while(ptr1<ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    printf("The reversed array is: ");
    for(int i=0; i<len; i++)    
    {
        printf("%d ", arr[i]);
    }
    return 0;
}