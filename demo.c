#include<stdio.h>

int main()
{
    int a,b;
    printf("\nEnter No1 : ");
    scanf("%d",&a);
    printf("\nEnter No2 : ");
    scanf("%d",&b);

    
    printf("\nAND : %d",a&b);
    printf("\nOR : %d",a|b);
    printf("\nXOR : %d",a^b);
    printf("\nLeft Shift : %d ",a<<1);
    printf("\nRight Shift : %d ",a>>1);

    return 0;

}