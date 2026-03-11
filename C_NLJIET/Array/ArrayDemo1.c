#include<stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE],i;

    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<SIZE;i++)
    {
        printf("\na[%d] : %d",i,a[i]);
    }
}