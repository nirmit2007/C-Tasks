#include <stdio.h>

int Max(int a, int b, int c);

int main()
{
    int n1, n2, n3, ans;
    printf("\nEnter Three Numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    ans = Max(n1, n2, n3);
    printf("\nMax Number = %d", ans);
    
    return 0;
}

int Max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}