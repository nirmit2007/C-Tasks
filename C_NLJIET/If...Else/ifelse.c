#include<stdio.h>

int main()
{
    int n;

    printf("\nEnter No : ");
    scanf("%d",&n);

    if(n%2 == 0)
    {
        printf("%d is Even",n);
    }else if (n%2!=0)
    {
        printf("%d is Odd",n);
    }else
    {
        printf("%d is zero",n);
    }
    return 0;
}