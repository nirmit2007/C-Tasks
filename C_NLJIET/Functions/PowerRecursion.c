#include <stdio.h>
#include <conio.h>

long int powerr(long int b, long int p);

int main()
{
    long int n, base, power;

    printf("\nEnter Base : ");
    scanf("%ld", &base);
    printf("\nEnter Power : ");
    scanf("%ld", &power);

    printf("\n%d raise to  %d = %d", base, power, powerr(base, power));
}

long int powerr(long int b, long int p)
{
    if (p == 0)
        return 1;
    return b * powerr(b, p - 1);
}

