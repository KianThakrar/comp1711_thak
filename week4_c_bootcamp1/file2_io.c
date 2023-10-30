#include <stdio.h>

int main(){
    char filename[] = "./data.txt";
    FILE *file = fopen(filename, "a");
    if (file == NULL){
        perror("File I/O");
        return 1;
    }
    //printf("file is %ld",file);
    fprintf(file, "Hello World!");
    fclose(file);

    return 0;
}