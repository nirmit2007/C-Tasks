#include <stdio.h>

int main() {
    long i,base,power,ans=1;
    printf("\nEnter Base Value :");
    scanf("%ld",&base);
    printf("\nEnter Power Value :");
    scanf("%ld",&power);
    
    for(i=0;i<=base;i++)
    {
        ans = ans * base;
    }
    printf("\na raised to the b = %ld",ans);
     
    return 0;
}