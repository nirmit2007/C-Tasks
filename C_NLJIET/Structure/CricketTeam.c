#include <stdio.h>

struct Cricket
{
    char player_name[20];
    char team_name[20];
    float batting_avg;
};

int main()
{
    struct Cricket c[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Player name     : ");
        scanf("%s", c[i].player_name);
        printf("\nEnter Team name       : ");
        scanf("%s", c[i].team_name);
        printf("\nEnter Batting Average : ");
        scanf("%f", &c[i].batting_avg);
    }

    printf("\n---Player Information---");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPlayer Name     : %s", c[i].player_name);
        printf("\nTeam Name       : %s", c[i].team_name);
        printf("\nBatting Average : %.2f", c[i].batting_avg);
    }
}