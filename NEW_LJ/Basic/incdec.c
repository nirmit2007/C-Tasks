#include<stdio.h>

int main()
{
    int a=10,b=6,c,d;

    c=a++;
    d=++b;
    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
}