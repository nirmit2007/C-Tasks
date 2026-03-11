#include <stdio.h>

int main()
{
    int  i, max = 0, min,n;

    printf("\nEnter Elements You Want : ");
    scanf("%d",&n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nMax = %d", max);
    printf("\nMin = %d", min);
}