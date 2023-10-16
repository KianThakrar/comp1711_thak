#include <stdio.h>
// learning how while loops work in c
int main() {

    long int a = 1;

    while (a > 0){
        printf("a = %ld\n", a);
        a += 1;
    }
    
    printf("After exiting the loop: a = %ld", a);
    return 0;

}
