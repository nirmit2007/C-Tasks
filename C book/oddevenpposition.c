#include<stdio.h>
int main() {
    int no;
    printf("Enter No: ");
    scanf("%d", &no);
   
    no = no/10;

    if(no>9){
        printf("Odd\n");
    } else {
        printf("Even\n");
    }
    return 0;
}