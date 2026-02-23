/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int v,d,t;
    printf("\nEnter Distance Travelled by Car (in Meters) : ");
    scanf("%d",&d);
    printf("\nEnter Time Taken by Car (in Seconds) : ");
    scanf("%d",&t);
    
    printf("\nThe Speed Of Car = %d m/s",d/t);
    return 0;
}
