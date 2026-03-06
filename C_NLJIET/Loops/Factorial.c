#include <stdio.h>
int main()
{
    int n, fact = 1, temp;
    printf("\nEnter Number : ");
    scanf("%d", &n);
    temp = n;

    while (n >= 1)
    {
        fact = fact * n;
        n--;
    }
    printf("%d! = %d\n", temp, fact);
    return 0;
}