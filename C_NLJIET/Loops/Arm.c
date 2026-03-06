// #include<stdio.h>

// int main()
// {
//     int n, temp, arm = 0, dup;    
//     printf("\nEnter No : ");
//     scanf("%d",&n);

//     dup = n;

//     while(n>0)
//     {
//         temp = n % 10;
//         arm = arm + temp * temp * temp;
//         n = n / 10;
//     }

//     if(arm == dup)
//         printf("\n%d is Armstrong", dup);
//     else
//         printf("\n%d is Not Armstrong", dup);

//     return 0;
// }

#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp, dup, digits = 0;
    float arm = 0;

    printf("Enter No : ");
    scanf("%d", &n);

    dup = n;

    while (dup > 0)
    {
        dup = dup / 10;
        digits++;
    }

    dup = n;

    while (dup > 0)
    {
        temp = dup % 10;
        arm = arm + pow(temp, digits);
        dup = dup / 10;
    }

    if (arm == n)
        printf("%d is Armstrong", n);
    else
        printf("%d is Not Armstrong", n);

    return 0;
}