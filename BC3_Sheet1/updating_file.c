#include <stdio.h>
#include <stdlib.h>
//updating a file

int main(){
    char buffer[100];
    int buffer_size = 100;
    int count;
    int sum;
    double average;

    char *filename = "numbers.dat";
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }

    while (fgets(buffer, buffer_size , file) != NULL){
        float number = atof(buffer);
        sum += number;
        count ++;
    }
    fclose(file);
    average = (double)sum / count;

    file = fopen(filename, "a");
    fprintf(file,"%lf",average);
    

    fclose(file);



}