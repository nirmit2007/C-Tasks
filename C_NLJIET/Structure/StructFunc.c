#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    float perc;
}record;

void func(struct Student record);

int main()
{
    printf("\nEnter Student ID : ");
    scanf("%d",&record.id);
    printf("\nEnter Student Name : ");
    scanf("%s",record.name);
    printf("\nEnter Student Percentage : ");
    scanf("%f",&record.perc);

    func(record);
}

void func(struct Student record)
{
    printf("\n---Student Information---");
    printf("\nID : %d",record.id);
    printf("\nName : %s",record.name);
    printf("\nPercentage : %.2f",record.perc);
}