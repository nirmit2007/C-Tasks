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

    if(strstr(name1,name2)==NULL)
    {
        printf("String Not Found");        
    }else
    {
        printf("String Found");        
    }
    return 0;
}