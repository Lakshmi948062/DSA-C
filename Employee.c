#include<stdio.h>
int main()
{
    int login[]={9,10,9};
    int logout[]={17,15,18};
    int n = sizeof(login)/sizeof(login[0]);
    for(int i=0;i<n;i++)
    {
        int checkout = logout[i]-login[i];
        if(checkout<6)
        {
            printf("Flagged = Employee %d\n",i+1);
        }
    }
}