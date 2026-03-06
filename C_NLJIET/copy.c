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

    strncpy(name1,name2,2); // strncpy takes condition for how many characters you want
    printf("%s",name1);
    return 0;
}