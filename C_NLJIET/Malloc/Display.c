#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("\nEnter Total Numbers You Want to Display : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("\nError ! Memory Not Allocated");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("\nEnter Elements : ");
            scanf("%d", ptr + i);
        }
        printf("\tNumbers = ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", *(ptr + i));
        }

        free(ptr);
    }
}