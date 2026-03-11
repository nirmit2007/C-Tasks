#include <stdio.h>

int main()
{
    int i, n, j, temp = 0;

    printf("\nEnter Elements You Want : ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted Array in Ascending Order : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}