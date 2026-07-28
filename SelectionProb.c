#include<stdio.h>
void selctionSort(int arr[], int n);
void display(int arr[], int n, int pass);
int main()
{
    int n, arr[10], i;
    printf("Enter the total number of students in class\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the height of student %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Student's height order before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    selctionSort(arr,n);
    printf("\nAfter final comparison of all students, the height order becomes:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void selctionSort(int arr[], int n)
{
    int i,min,j,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        display(arr,n,i+1);
    }
}
void display(int arr[],int n,int pass)
{
    int i;
    printf("\nHeight order of students after iteration %d\n", pass);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}