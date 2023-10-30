#include <stdio.h>

int str_len(char phrase[])
{
    int i;
    for (i = 0; phrase[i] != '\0'; i++);

    return i;
}

int main()
{
    char phrase[1000];

    printf("ENTER A STRING: ");
    scanf("%s", phrase);
    printf("The length of %s is %d\n",phrase, str_len(phrase));

    return 0;

}