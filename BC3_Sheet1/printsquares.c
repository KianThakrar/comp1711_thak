#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of squares: ");
    scanf("%d", &n);

    char *filename = "squares.dat";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }
    for(int i = 1; i <= n; i++){
        fprintf(file, "%d\n", i * i);
    }
    fclose(file);
}
    