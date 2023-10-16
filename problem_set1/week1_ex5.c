#include<stdio.h>
// program to swap the value of 2 variables
int main(){
    int num1, num2, temporary;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
// using temporary as a temp value to swap values - order swaps the values
    temporary = num1;
    num1 = num2;
    num2 = temporary;

    printf("The value of num1 = %d\n",num1);
    printf("The value of num2 = %d\n",num2);
    return 0;



}