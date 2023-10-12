#include<stdio.h>
// program to find max value of data types in c

int main(){

    int int_type;
    float float_type;
    char char_type;
    double double_type;

    printf("Size of int is: %ld\n", sizeof(int_type));
    printf("Size of float is: %ld\n", sizeof(float_type));
    printf("Size of char is: %ld\n", sizeof(char_type));
    printf("Size of double is: %ld\n", sizeof(double_type));

    return 0;


}