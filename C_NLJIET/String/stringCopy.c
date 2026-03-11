#include<stdio.h>

int main()
{
    char s1[30], s2[30];
    int i = 0;

    printf("\nEnter String : ");
    scanf(" %[^\n]", s2);

    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }

    s1[i] = '\0'; 

    printf("\nCopied String : %s", s1);

    return 0;
}