#include <stdio.h>

int strlength(char s[]);

int main()
{
    char s[50];
    
    printf("\nEnter String : ");
    gets(s);

    strlength(s);

    return 0;
}

int strlength(char s[])
{
    int len = 0;

    while (s[len] != '\0' && s[len] != '\n')
    {
        len++;
    }
    return len;
}
