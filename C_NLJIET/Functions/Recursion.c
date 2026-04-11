#include<stdio.h>

int Hi(int n);

int main()
{
    int x;
    printf("\nEnter X : ");
    scanf("%d",&x);
    Hi(x);
    return 0;
}

int Hi(int n)
{
    if(n<=0)
    {
        printf("\nBye...");
    }
    else
    {
        printf("\nHi...");
        Hi(n-1); // recursion
    }
}