#include<stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};//s1

int main()
{
    struct Student s1;

    printf("\nEnter Roll No. : ");
    scanf("%d",&s1.rollno);
    printf("\nEnter Name : ");
    scanf("%s",s1.name);
    printf("\nEnter Marks : ");
    scanf("%f",&s1.marks);

    printf("\nRoll No. : %d",s1.rollno);
    printf("\nName : %s",s1.name);
    printf("\nMarks : %.2f",s1.marks);
}