#include<stdio.h>

int main()
{
    int n,i=1;
    printf("\nEnter No : ");
    scanf("%d",&n);

    while(i<11)
    {
        printf("\n %d * %d = %d",n,i,n*i);
        i++;
    }
}