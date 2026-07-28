#include<stdio.h>
void bubbleSort(int arr[], int n);
void display(int arr[],int n,int pass);
int main()
{
    int n,arr[10],i;
    printf("How many students can be seated in a bench?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the height of student %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Height order of students before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    bubbleSort(arr,n);
    printf("\nFinal Sorting of students in a bench are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void bubbleSort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        display(arr,n,i+1);
    }
}
void display(int arr[],int n,int pass)
{
    int i;
    printf("\nHeight order of students after iteration %d\n",pass);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}