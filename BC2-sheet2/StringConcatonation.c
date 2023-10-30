#include <stdio.h>

int str_len(char phrase[100]){
    int i;
    for (i = 0; phrase[i] != '\0'; i++);

    return i;
}

char concatonated(char string1[], char string2[]){
    int length1, length2, total_length, i, j;
    length1 = str_len(string1);
    length2 = str_len(string2);
    total_length = length1 + length2;
    char concatonated_string[100];


    return 0;

}

int main(){
    char string1[100];
    char string2[100];
    printf("Enter a string: ");
    scanf("%s", string1);
    printf("Enter an another string");
    scanf("%s", string2);

    printf("Conacationed string is: %s",concatonated(string1, string2));

    return 0;
}

