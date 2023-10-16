#include <stdio.h>
//program to get the sum of an array
int main(){

    int values[6];
    int i, sum = 0;

    for (i = 0; i <= 4; i++){
        printf("Enter a value for the array: ");
        scanf("%d", &values[i]);

    }

    for (i = 0; i <= 4; i++){
        sum += values[i];

    }

    printf("The sum is %d", sum);
    return 0;

}