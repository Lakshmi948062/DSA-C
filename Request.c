#include<stdio.h>
int main()
{
    int logs[]={120,600,450,800,200};
    int count=0;
    int n=sizeof(logs)/sizeof(logs[0]);
    int max = logs[0];
    for(int i=0;i<n;i++)
    {
        if(logs[i]>500)
        {
            count++;
        }
        if(logs[i]>max)
        {
            max = logs[i];
        }
    }
    printf("Request>500ms:%d\n",count);
    printf("Max Delay = %d\n",max);
    return 0;
}