#include<stdio.h>
void insertionSort(int arr[],int n);
void display(int arr[],int n,int pass);
int main()
{
    int n,i,arr[17];
    printf("Enter the total number of cards:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter card number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    printf("\nFinally the sorted card order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void insertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        display(arr,n,i);
    }
}
void display(int arr[],int n,int pass)
{
    int i;
    printf("\nArrangement of cards after iteration %d\n",pass);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}