#include<stdio.h>

int main()
{
    char s[30];
    int len=0;

    printf("\nEnter String : ");
    gets(s);

    while(s[len] != '\0')
    {
        len++;
    }
    printf("\nLength %d: ",len);
}