#include <stdio.h>

void Static(void);

int main()
{
    for (int i = 0; i < 3; i++)
    {
        Static();
    }
    return 0;
}

void Static(void)
{
    auto int x = 0;
    static int y = 0;
    x++;
    y++;
    printf("\nx (auto) = %d", x);
    printf("\ny (static) = %d", y);
}