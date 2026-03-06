#include<stdio.h>

int main()
{
    char name[30];

    printf("\nEnter String : ");
    scanf(" %[^\n]", name);  // gets(name) but not safe

    printf("\nName : ",name);
    
}