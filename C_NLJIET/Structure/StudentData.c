#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
}; // s1

int main()
{
    struct Student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Roll No. : ");
        scanf("%d", &s[i].rollno);
        printf("\nEnter Name : ");
        scanf("%s", s[i].name);
        printf("\nEnter Marks : ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nRoll No. : %d", s[i].rollno);
        printf("\nName : %s", s[i].name);
        printf("\nMarks : %.2f", s[i].marks);
    }
}