#include <stdio.h>

struct Time
{
    int Hour;
    int Minute;
    int Second;
} t;

int main()
{
    printf("\nEnter Hour   : ");
    scanf("%d", &t.Hour);
    printf("\nEnter Minute : ");
    scanf("%d", &t.Minute);
    printf("\nEnter Second : ");
    scanf("%d", &t.Second);

    printf("\n---Time Information---");

    printf("\n%d Hr : %d Min : %d Sec", t.Hour, t.Minute, t.Second);
}