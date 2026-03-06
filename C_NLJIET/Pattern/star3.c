#include<stdio.h>

int main()
{
    int row, i, j,num,k;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(i = row; i >= 1; i--)        
    {
        for(k=5-i;;k++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)      
        {
            if(i%2==0)
            {
                printf(" # ");   
            }else
            {
                printf(" * ");
            }
        }
        printf("\n");                
    }
    return 0;
}