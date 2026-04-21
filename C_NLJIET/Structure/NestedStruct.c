#include<stdio.h>

struct Address
{
    char city[20];
    char state[20];
    int pincode;
};

struct Student
{
    int rollno;
    char name[20];
    float marks;
    struct Address addr; // nested structure
};

int main()
{
    struct Student s1;

    printf("\nEnter Roll No. : ");
    scanf("%d",&s1.rollno);
    printf("\nEnter Name : ");
    scanf("%s",s1.name);
    printf("\nEnter Marks : ");
    scanf("%f",&s1.marks);

    printf("\nEnter City : ");
    scanf("%s",s1.addr.city);
    printf("\nEnter State : ");
    scanf("%s",s1.addr.state);
    printf("\nEnter Pincode : ");
    scanf("%d",&s1.addr.pincode);

    printf("\nRoll No. : %d",s1.rollno);
    printf("\nName : %s",s1.name);
    printf("\nMarks : %.2f",s1.marks);
    printf("\nCity : %s",s1.addr.city);
    printf("\nState : %s",s1.addr.state);
    printf("\nPincode : %d",s1.addr.pincode);

}