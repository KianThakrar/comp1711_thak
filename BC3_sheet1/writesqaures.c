#include <stdio.h>

int main() {
    int n;

    // Ask the user for the value of 'n'
    printf("Enter a positive integer 'n': ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Open the file for writing
    FILE *file = fopen("squares.dat", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Write the squares of positive integers to the file
    for (int i = 1; i <= n; i++) {
        fprintf(file, "%d %d\n", i, i * i);
    }

    // Close the file
    fclose(file);

    printf("Squares have been written to 'squares.dat'.\n");

    return 0; // Exit successfully
}