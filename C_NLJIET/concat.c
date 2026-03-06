#include<stdio.h>
#include<string.h>

int main()
{
    char name1[30];
    char name2[30];

    printf("\nEnter String 1: ");
    gets(name1);
    printf("\nEnter String 2: ");
    gets(name2);

    strcat(name1,name2);
    printf("%s",name1);
    
    printf("\n");

    strncat(name1,name2,3);
    printf("%s",name1);
}