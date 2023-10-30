#include <stdio.h>
#include <stdlib.h>
// reads the numbers from squares.dat and gets the average
int main(){
    char buffer[100];
    int buffer_size = 100;
    int count;
    int sum;
    double average;

    char* filename = "squares.dat";
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }

    while (fgets(buffer, buffer_size , file) != NULL){
        int number = atoi(buffer);
        sum += number;
        count ++;

    }
    average = sum / count;
    printf("%.2lf\n", average);


}