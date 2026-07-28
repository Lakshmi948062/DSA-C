/* Pointer Example */
#include<stdio.h>
int main()
{
    int a =10;
    printf("%d\n",sizeof(a));
    int *ptr = &a;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",a);
    printf("%d\n",sizeof(ptr));
    return 0;
}