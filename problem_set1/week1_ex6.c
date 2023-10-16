#include<stdio.h>
//program to check if a number is odd or even
int main(){

    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
        printf("%d is an even number\n", num1);
    else
        printf("%d is an odd number\n", num1);
    return 0;




    
}