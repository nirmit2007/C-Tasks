#include<stdio.h>

int main()
{
    int n1,n2,choice,sum=0,sub=0,mul=1,div=1;


do
{
    printf("\n----Calculator----");
    printf("\nEnter No1 : ");
    scanf("%d",&n1);
    printf("\nEnter No2 : ");
    scanf("%d",&n2);

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Divison");
    printf("\n5.Exit");
    printf("\n\nChoose Your Option : ");
    scanf("%d",&choice);

    switch (choice)
    {
        case  1 : sum = n1 + n2;
                  printf("\nSum = %d",sum);
                  break;

        case  2 : sub = n1 - n2;
                  printf("\nSub = %d",sub);
                  break;

         case  3 : mul = n1 * n2;
                  printf("\nMul = %d",mul);
                  break;

         case  4 : div = n1 / n2;
                  printf("\nDiv = %d",div);
                  break;

         case 5 : printf("\nExiting...");
                   break;

         default : printf("\nEnter Valid Number");         
    }
}while(choice!=5);
    return 0;
}