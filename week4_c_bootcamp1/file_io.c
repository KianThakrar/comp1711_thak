#include <stdio.h>

int main(){
    char filename[] = "./data.txt";
    FILE *file = fopen(filename, "a");
    if (file == NULL){
        perror("File I/O");
        return 1;
    }
    
    //printf("file is");
    //fprintf(file, "Hello World!\n");
    //fclose(file);

    int max_number = 10, i;
    for (i = 1;i <= max_number; i++)
        fprintf(file, "%d\n", i * i);
    fclose(file);


    return 0;
}