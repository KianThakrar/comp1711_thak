#include<stdio.h>
// finding error of program 
// prints 2 to begin with
// problem is that the output is not an integer as "%d" expects an interger
// we should make them float variables and then execpt that in the print statement

int main(){
    int a = 5, b = 2;
    printf("%d", a / b);
}
