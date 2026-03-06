/*
    1
    1 3
    1 3 5
    1 3 5 7
*/
#include<stdio.h>

int main()
{
    int row, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)
    {
        num = 1;              

        for(j = 1; j <= i; j++)
        {
            printf("%d\t", num);
            num = num + 2;    
        }

        printf("\n");
    }

    return 0;
}