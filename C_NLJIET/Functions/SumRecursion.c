#include <stdio.h>

long int sod(long int n); 

int main()
{
    long int n;

    printf("\nEnter 5 digit Number : ");
    scanf("%ld", &n);

    printf("\nSum of digit = %d", sod(n));

    return 0;
}

long int sod(long int n)
{
    if (n != 0)
    {
        return (n % 10) + sod(n / 10);
    }
    else
    {
        return 0;
    }
}