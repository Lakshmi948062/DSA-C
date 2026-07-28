#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int)); // dynamically allocating memory for 5 integers
    p[3]=15;
    p=realloc(p,10*sizeof(int)); // resizing the allocated memory to hold 10 integers
    free(p); // deallocating the memory
    for(int i=0;i<10;i++)
    {
        printf("%d ",p[i]); // printing the elements of the array (undefined behavior since memory is freed)
    }
    return 0;
}