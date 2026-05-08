#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *ptr;

    ptr = (int *)realloc(ptr, 8 * sizeof(int));

    for (i = 0; i < 8; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}