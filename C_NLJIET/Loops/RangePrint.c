#include<stdio.h>

int main()
{
    int s,e,n;

    printf("\nEnter Starting Num : ");
    scanf("%d",&s);
    printf("\nEnter Ending Num : ");
    scanf("%d",&e);
    printf("\nEnter Value of N : ");
    scanf("%d",&n);


    for(int i=s;i<=e;i++)
    {
        if(i%n==0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}