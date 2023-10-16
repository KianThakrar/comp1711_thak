#include <stdio.h>

int main(){

    double values[5];
    int i, j;
    double max = 0;

    for (i = 0; i <= 4; i++){
        printf("Enter a value for the array: ");
        scanf("%lf", &values[i]);
    }

    for(j = 0; j <4; j++);
        if (values[j] > max){
            max = values[j];
        }

    printf("The max values of the array is %lf", max);
    return 0;
}