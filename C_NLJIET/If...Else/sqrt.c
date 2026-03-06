#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    printf("\nEnter Between Numbers you want for SQRT: ");
    scanf("%d %d",&x,&y);

    begin:

    sqrt(x);
    printf("\t%f",sqrt(x));

    if(x<=y)
    {
        x++;
        goto begin;
    }
    return 0;
}