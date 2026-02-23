/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,a[10],total=0;
    for(i=0;i<10;i++)
    {
       printf("\nEnter a[%d] : ",i);
       scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        total = a[i] * a[i] + total;
        printf("\na[%d] : %d",i,a[i]);
    }
    printf("\nTotal Square Sum = %d",total);

    return 0;
}