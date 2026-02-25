#include<stdio.h>

int main()
{
    int i=0,sum=0,n;

    printf("\nEnter Num : ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\t",i);
        sum = sum + i;
        i++;
    }
    printf("\nSum = %d",sum);
}