#include<stdio.h>

union Uni
{
    int i;
    char c;
    float f;
}u;

struct Struct
{
    int i;
    char c;
    float f;
}s;

int main()
{
    int size;

    size = sizeof(u);
    printf("\nTotal Size For Union     : %d",size);

    size = sizeof(s);
    printf("\nTotal Size For Structure : %d",size);

    return 0;
}

