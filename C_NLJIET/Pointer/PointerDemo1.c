#include<stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("\nValue of a = %d",a);
    printf("\nAddress of a = %d",&a);
    printf("\nValues Stored in pointer p = %d",p);
    printf("\nValue pointed by p = %d",*p);

}