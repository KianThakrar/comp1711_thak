#include <stdio.h>
// program to rotate every element in the list
// one to the right
/* plan is to move the first 4 (loop) to the right and 
then the last one to the fron */

int main(){
    int values[5], rotate[5];
    int i,j;

    for (i = 0; i <= 4; i++){
        printf("Enter a value for the array: ");
        scanf("%d", &values[i]);
    }  

    i = 0;
    
   for (i = 1; i <= 5; i++){
        rotate[5 - i] = values[4- i];

    }

    rotate[0] = values[4];
    printf("The rotated array is : ");

    i = 0;
    for (i = 0; i <= 4; i++){
        printf("%d", rotate[i]);
    }

    


}
