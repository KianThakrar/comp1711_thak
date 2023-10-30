#include <stdio.h>
//program to see if number is positive negative or 0

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("The number is 0\n");
    }
    else if (number > 0)
    {
        printf("The number is postive\n");
    }
    else 
    {
        printf("The number is negative\n");
    }

    return 0;
}