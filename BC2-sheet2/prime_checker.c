#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1){
        return 0;
    }
    if (number <= 3){
        return 1;
    }
    if (number % 2 == 0){
        return 0;
    }
    int i;
    for (i = 3; i <= number / 2; i+=2){
        if (number % i == 0){
            return 0;
        }

    }
    
    return 1;
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d\n",isPrime(number));
}