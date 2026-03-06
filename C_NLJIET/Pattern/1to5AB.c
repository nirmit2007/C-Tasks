#include <stdio.h>

int main()
{
    int row, i, j, k, l;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (k = row - i; k >= 1; k--)
        {
            printf(" ");
        }

        if (i % 2 != 0)  
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else             
        {
            for (l = 0; l < i; l++)
            {
                printf("%c ", 65 + l);
            }
        }

        printf("\n");
    }

    return 0;
}