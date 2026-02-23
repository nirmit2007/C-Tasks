#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("\nEnter a character : ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        printf("\nIt is alphabet");
    }
    else if(isdigit(ch))
    {
        printf("\n It is Digit");
    }
    else if(islower(ch))
    {
        printf("\nIt is lower ch");
    }
    else if(isspace(ch))
    {
        printf("\nIt is Space");
    }
    else 
    {
        printf("\nPlease Enter Valid Input");
    }

    return 0;
}