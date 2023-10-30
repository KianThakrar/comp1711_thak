#ifndef UTILS_H
#define UTLILS_H

#include <stdio.h>
#include <stdlib.h>
#include "utils.h" //use for file that you generate

FILE *open_file(char filename[], char mode[]){
    FILE *file = fopen(filename, mode);
     if (file == NULL){
        perror("File I/O");
        exit(1);
     }
    return file;

}

int main(){
   
    int buffer_size = 2;
    char buffer [buffer_size];
    int count = 0;
    while(fgets(buffer, buffer_size, file)){
        printf("%s", buffer);
        count++;
    }


    fclose(file);
    return 0;
}

#endif