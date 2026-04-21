#include<stdio.h>

struct EmployeeSalary
{
    char name[50];
    float basic;
    float da;
    float ta;
    float deduction;
    float net_salary;
}E1;


int main()
{
    struct EmployeeSalary E1 = {"Nirmit",10000000,2,3,2.3,9000000};

    printf("\nName         : %s",E1.name);
    printf("\nBasic Salary : %.2f",E1.basic);
    printf("\nDA           : %.2f",E1.da);
    printf("\nTA           : %.2f",E1.ta);
    printf("\nDeduction    : %.2f",E1.deduction);
    printf("\nNet Salary   : %.2f",E1.net_salary);
    
    return 0;
}