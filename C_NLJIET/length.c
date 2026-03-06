#include<stdio.h>
#include<string.h>

int main()
{
    int len;
    char name1[30];
    
    printf("\nEnter String 1: ");
    gets(name1);

    len = strlen(name1);
    printf("Length : %d",len);
}