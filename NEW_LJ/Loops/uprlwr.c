#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("\nEnter a character : ");
    scanf(" %c", &ch);   

    for(int i=0;i<=ch;i++)
    {
        if (isupper(ch)) 
        {
            ch = tolower(ch);
        } 
        else if (islower(ch)) 
        {
            ch = toupper(ch);
        }
        
        printf("%c", ch); 

        scanf("%c", &ch); 
    }

    return 0;
}
