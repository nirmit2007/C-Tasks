#include <stdio.h>

double pwr(int x, int y);

int main()
{
    int base, power;
    double ans;

    printf("\nEnter Value of Base Number : ");
    scanf("%d", &base);
    printf("\nEnter Value of Power Number : ");
    scanf("%d", &power);

    ans = pwr(base, power);
    printf("\nPower of %d to %d is : %.2lf", base, power, ans);
    return 0;
}

double pwr(int x, int y)
{
    double p = 1;

    for (int i = 0; i < y; i++)
    {
        p = p * x;
    }
    return p;
}