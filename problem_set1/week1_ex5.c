#include<stdio.h>
// program to swap the value of 2 variables
int main(){
    double num1, num2, temporary;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
// using num 3 as a temp value to swap values - order swaps the values
    temporary = num1;
    num1 = num2;
    num2 = temporary;

    printf("The value of num1 = %lf\n",num1);
    printf("The value of num2 = %lf\n",num2);
    return 0;



}