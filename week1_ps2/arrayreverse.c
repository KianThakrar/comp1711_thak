#include <stdio.h>
// program to print out array in reverse
int main(){
    int values[5];
    int reverse[5];
    int i, j;

    for (i = 0; i <= 4; i++){
        printf("Enter a value for the array: ");
        scanf("%d", &values[i]);
    }


    for (j = 0; j <= 4; j++){
        reverse[j] = values[4-j];
        printf("%d", reverse[j]);
       


    }

    
    return 0;
}