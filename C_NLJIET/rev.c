#include<stdio.h>
#include<string.h>

int main()
{
    char name1[30];
    
    printf("\nEnter String 1: ");
    gets(name1);

    strrev(name1);
    printf("Reverse : %s",name1);
}