#include<stdio.h>

/*
int main()
{
    for(i=0;i<=10;i++)
    {
        printf("%d\t ",i);
    }
}
*/

/*
int main() 
{
    int i = 0;
    while(i <= 10) {
        printf("%d\t ", i);
        i++;
    }
    return 0; 
}
*/

int main() 
{
    int i = 0;
    do
    {
        printf("\t%d",i);
        i++;
    } while (i<=10);
    return 0; 
}