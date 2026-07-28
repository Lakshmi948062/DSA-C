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
    struct Students s1;
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter the marks: ");
    scanf("%f", &s1.marks);
    printf("Enter the age: ");
    scanf("%d", &s1.age);
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    printf("Age: %d\n", s1.age);
    return 0;
}