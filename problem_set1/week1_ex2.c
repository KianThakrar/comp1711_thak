#include<stdio.h>
// Asks user for two numbers and then prints the sum of them
int main(){

    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter another number: ");
    scanf("%d", &num2);

    int sum;
    sum = num1 + num2;

    printf("Sum of %d snd %d is %d\n", num1, num2, sum);
    
    return 0;
}