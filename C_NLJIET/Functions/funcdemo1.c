#include<stdio.h>

int f1(void);   // Function Prototype
int f2(void);
int f3(void);

int x;      // Global Variable

void main()
{
    x = 10;
    printf("\nOriginal X = %d",x);
    f1();
    printf("\nFunction Call : x = %d",x);
    f2();
    printf("\nFunction Call : x = %d",x);   
    f3();
    printf("\nFunction Call : x = %d",x);
}
int f1()
{
    x = x + 10;
    return x;
}
int f2()
{
    x = 5;
    return x;
}
int f3()
{
    x = x + 10;
    return x;
}