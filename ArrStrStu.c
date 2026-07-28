/*Structure for the student information*/
#include<stdio.h>
struct Students
{
    char name[20];
    int roll;
    float marks;
    int age;
};
int main()
{
    struct Students s1[100]; // array of structures to store information of 100 students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", s1[i].name);
        printf("Enter the roll number: ");
        scanf("%d", &s1[i].roll);
        printf("Enter the marks: ");
        scanf("%f", &s1[i].marks);
        printf("Enter the age: ");
        scanf("%d", &s1[i].age);
    }
    for(int i=0; i<n; i++)
    {
        printf("\nName: %s\n", s1[i].name);
        printf("Roll Number: %d\n", s1[i].roll);
        printf("Marks: %.2f\n", s1[i].marks);
        printf("Age: %d\n", s1[i].age);
    }
    return 0;
}