#include <stdio.h>

int lcm(int n1, int n2);

int main()
{
    int a, b, result;

    printf("\nEnter Two Numbers : ");
    scanf("%d %d", &a, &b);

    result = lcm(a, b);

    printf("\nLCM : %d", result);
    return 0;
}

int lcm(int n1, int n2)
{
    int gcd = 1, i;

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    return (n1 * n2) / gcd;
}