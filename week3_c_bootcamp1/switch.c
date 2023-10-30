#include <stdio.h>
// showing how to use switch cases in c - why to use break etc...
int main(){

    int label = 1;

    switch(label){
        case 0:
            printf("0 was selected.\n");
            break;
        case 1:
            printf("1 was selected.\n");
            break;
        case 2:
            printf("2 was selected.\n");
            break;
    }
    return 0;
}