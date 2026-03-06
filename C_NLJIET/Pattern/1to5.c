#include<stdio.h>

int main()
{
    int row, i, j,num,k;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++)        
    {
        for(k=1;k<=row;k++)
        {
            printf(" ");
        }
        for(j = i; j <=row; j++)      
        {
            printf(" %d",j);
        }
        printf("\n");                
    }
    return 0;
}