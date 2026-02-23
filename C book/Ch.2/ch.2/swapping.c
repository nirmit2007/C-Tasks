/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int no1,no2,temp;
    printf("\nEnter No1 : ");
    scanf("%d",&no1);
    printf("\nEnter No2 : ");
    scanf("%d",&no2);
    
    temp=no1;
    no1=no2;
    no2=temp;
    
    printf("\nSwapping No1 = %d",no1);
    printf("\nSwapping No2 = %d",no2);

    return 0;
}

