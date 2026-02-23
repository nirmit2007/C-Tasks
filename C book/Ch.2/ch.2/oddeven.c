/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int no;
    printf("Enter No : ");
    scanf("%d",&no);
    
    if(no%2==0 && no>0)
    {
     printf("\n%d is Even Number",no);   
    }else if(no%2!=0){
     printf("\n%d is Odd Number",no);    
    }else if(no<0){
     printf("\n%d is Negative Number",no);
    }else if(no=0){
     printf("\n%d is Zero",no);
    } 

    return 0;
}
