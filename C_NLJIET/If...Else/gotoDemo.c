#include<stdio.h>

int main()
{
    int x,y;
    printf("\nEnter Between Numbers you want : ");
    scanf("%d %d",&x,&y);

    begin:

    printf("\t%d",x);
    x++;

    if(x<=y)
    {
        goto begin;
    }
    return 0;
}