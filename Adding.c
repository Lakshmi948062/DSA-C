/* Adding Numbers */
#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("The number entered is zero");
    }
    else
    {
        result = 1 + (a-1)%9;
        printf("%d",result);
    }
    return 0;
}