#include<stdio.h>

int main()
{
    int n,temp,sum=0,dup;
    printf("\nEnter No : ");
    scanf("%d",&n);

    dup = n;

    while(n>0)
    {
        temp = n % 10;
        sum = sum * 10 + temp;
        n=n/10;
    }

    if(sum == dup)
        printf("\n%d is Palindrome",dup);
    else
        printf("\n%d is Not Palindrome",dup);

}