#include <stdio.h>

int main(){
    int a = 1;
    
    for(a = 1; a <= 10; a += 1){
        printf("%d\n", a * a);
    }

    return 0;
}