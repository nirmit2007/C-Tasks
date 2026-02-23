#include<stdio.h>

int main()
{
    float perc;
    
    printf("\nEnter Percentage : "); 
    scanf("%f",&perc); 

    if(perc >= 90)
    {
        printf("\n%.2f => A",perc);
    }
    else if (perc >= 80)
    {
        printf("\n%.2f => B",perc);  
    }
    else if (perc >= 60)
    {
        printf("\n%.2f => C",perc); 
    }
    else
    {
        printf("\n%.2f => Fail Manas",perc);  
    }
    return 0;
}