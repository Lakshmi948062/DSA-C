/* Sum of Rows and Columns in a 2D Array */
#include<stdio.h>
int main()
{
    int arr[3][3]={{12,22,30},{45,56,67},{78,89,90}};
    int ColSum = 0;
    int RowSum = 0;
    int *ptr = &arr[0][0]; // pointer to the first element of the 2D array
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            RowSum += *ptr; 
            ptr++; 
        }
        printf("The sum of row %d is: %d\n", i+1, RowSum);
        RowSum = 0; // reset RowSum for the next row
    }
    ptr = &arr[0][0]; 
    for(int j=0; j<3; j++)
    {
        for(int i=0; i<3; i++)
        {
            ColSum += *ptr; 
            ptr += 3; 
        }
        printf("The sum of column %d is: %d\n", j+1, ColSum);
        ColSum = 0; 
        ptr = &arr[0][j+1]; 
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
int arr[3][3]={{12,22,30},{45,56,67},{78,89,90}};
int ColSum = 0;
int RowSum = 0;
for(int i = 0; i < 3; i++)
{
    for(int j=0; j < 3; j++)
    {
        RowSum+=*(*(arr+i)+j);
        ColSum+=*(*(arr+j)+i);
    }
    printf("The sum of row %d is: %d\n", i+1, RowSum);
    printf("The sum of column %d is: %d\n", i+1, ColSum);
    RowSum = 0;
    ColSum = 0;
}
return 0;
}
