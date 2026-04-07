#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main()
{
    int choice;
    float n1, n2;

    printf("\nEnter No1 : ");
    scanf("%f", &n1);
    printf("\nEnter No2 : ");
    scanf("%f", &n2);

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nAddition : %.2f", add(n1, n2));
        break;

    case 2:
        printf("\nSubtraction : %.2f", sub(n1, n2));
        break;

    case 3:
        printf("\nMultiplication : %.2f", mul(n1, n2));
        break;

    case 4:
        printf("\nDivision : %.2f", div(n1, n2));
        break;

    default:
        printf("\nInvalid Choice");
    }
    return 0;
}

float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}