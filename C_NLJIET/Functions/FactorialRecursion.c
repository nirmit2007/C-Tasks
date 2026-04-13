#include <stdio.h>

int fact(int n);

int main()
{
    int n, ans;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("\nFactorial not defined for negative numbers");
        return 0;
    }

    ans = fact(n);

    printf("\nFactorial = %d", ans);

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}