#include<stdio.h>
#include<string.h>

int main()
{
    char name1[30];
    char name2[30];

    printf("\nEnter String 1: ");
    gets(name1);
    printf("\nEnter String 1: ");
    gets(name2);

    if(strcmp(name1,name2)==0)
    {
        printf("\nBoth String are same");
    }else
    {
        printf("\nBoth String are not same");
    }
    return 0;
}