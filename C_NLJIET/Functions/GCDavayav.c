#include<stdio.h>

int gcd(int n1,int n2);

int main()
{
    int a,b,result;

    printf("\nEnter Two Numbers : ");
    scanf("%d %d",&a,&b);

    result = gcd(a,b);

    printf("\nGCD : %d",result);
    return 0;
}

int gcd(int n1,int n2)
{
    int ans,i;

    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1 % i==0 && n2 % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}