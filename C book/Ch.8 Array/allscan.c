#include <stdio.h>

int main()
{
    int i, j, row, tri_type, direction, tr;
    int loop_type;

    printf("\nEnter Triangle Type (1.Normal / 2.Reverse) : ");
    scanf("%d", &tri_type);

    printf("\nEnter number of Triangle : ");
    scanf("%d", &tr);

    printf("\nEnter number of rows : ");
    scanf("%d", &row);

    printf("\nEnter Direction Type (1.Vertical / 2.Horizontal) : ");
    scanf("%d", &direction);

    printf("\nEnter Loop Type (1.For / 2.While / 3.Do...While) : ");
    scanf("%d", &loop_type);

    switch(loop_type)
    {
        case 1: // FOR loop
            if(tri_type == 1) // Normal
            {
                if(direction == 1) // Vertical
                {
                    for(int t = 1; t <= tr; t++)
                    {
                        for(i = 1; i <= row; i++)
                        {
                            for(j = 1; j <= i; j++)
                                printf("*\t");
                            printf("\n");
                        }
                    }
                }
                else // Horizontal
                {
                    for(i = 1; i <= row; i++)
                    {
                        for(int t = 1; t <= tr; t++)
                        {
                            for(j = 1; j <= i; j++)
                                printf("*");
                            printf("\t");
                        }
                        printf("\n");
                    }
                }
            }
            else // Reverse
            {
                if(direction == 1) // Vertical
                {
                    for(int t = 1; t <= tr; t++)
                    {
                        for(i = row; i >= 1; i--)
                        {
                            for(j = 1; j <= i; j++)
                                printf("*\t");
                            printf("\n");
                        }
                    }
                }
                else // Horizontal
                {
                    for(i = row; i >= 1; i--)
                    {
                        for(int t = 1; t <= tr; t++)
                        {
                            for(j = 1; j <= i; j++)
                                printf("*");
                            printf("\t");
                        }
                        printf("\n");
                    }
                }
            }
            break;

        case 2: // WHILE loop
            if(tri_type == 1) // Normal
            {
                if(direction == 1) // Vertical
                {
                    int t = 1;
                    while(t <= tr)
                    {
                        i = 1;
                        while(i <= row)
                        {
                            j = 1;
                            while(j <= i)
                            {
                                printf("*\t");
                                j++;
                            }
                            printf("\n");
                            i++;
                        }
                        t++;
                    }
                }
                else // Horizontal
                {
                    i = 1;
                    while(i <= row)
                    {
                        int t = 1;
                        while(t <= tr)
                        {
                            j = 1;
                            while(j <= i)
                            {
                                printf("*");
                                j++;
                            }
                            printf("\t");
                            t++;
                        }
                        printf("\n");
                        i++;
                    }
                }
            }
            else // Reverse
            {
                if(direction == 1) // Vertical
                {
                    int t = 1;
                    while(t <= tr)
                    {
                        i = row;
                        while(i >= 1)
                        {
                            j = 1;
                            while(j <= i)
                            {
                                printf("*\t");
                                j++;
                            }
                            printf("\n");
                            i--;
                        }
                        t++;
                    }
                }
                else // Horizontal
                {
                    i = row;
                    while(i >= 1)
                    {
                        int t = 1;
                        while(t <= tr)
                        {
                            j = 1;
                            while(j <= i)
                            {
                                printf("*");
                                j++;
                            }
                            printf("\t");
                            t++;
                        }
                        printf("\n");
                        i--;
                    }
                }
            }
            break;

        case 3: // DO...WHILE loop
            if(tri_type == 1) // Normal
            {
                if(direction == 1) // Vertical
                {
                    int t = 1;
                    do {
                        i = 1;
                        do {
                            j = 1;
                            do {
                                printf("*\t");
                                j++;
                            } while(j <= i);
                            printf("\n");
                            i++;
                        } while(i <= row);
                        t++;
                    } while(t <= tr);
                }
                else // Horizontal
                {
                    i = 1;
                    do {
                        int t = 1;
                        do {
                            j = 1;
                            do {
                                printf("*");
                                j++;
                            } while(j <= i);
                            printf("\t");
                            t++;
                        } while(t <= tr);
                        printf("\n");
                        i++;
                    } while(i <= row);
                }
            }
            else // Reverse
            {
                if(direction == 1) // Vertical
                {
                    int t = 1;
                    do {
                        i = row;
                        do {
                            j = 1;
                            do {
                                printf("*\t");
                                j++;
                            } while(j <= i);
                            printf("\n");
                            i--;
                        } while(i >= 1);
                        t++;
                    } while(t <= tr);
                }
                else // Horizontal
                {
                    i = row;
                    do {
                        int t = 1;
                        do {
                            j = 1;
                            do {
                                printf("*");
                                j++;
                            } while(j <= i);
                            printf("\t");
                            t++;
                        } while(t <= tr);
                        printf("\n");
                        i--;
                    } while(i >= 1);
                }
            }
            break;

        default:
            printf("Invalid loop type selected.");
    }

    return 0;
}
