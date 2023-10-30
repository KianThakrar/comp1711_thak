#include <stdio.h>
// Create a menu system using a SWITCH statement

int main()
{
    int option;
    printf("Enter the menu option (1-5): ");
    scanf("%d", &option);

    if (option < 1 || option > 5)
    {
        printf("Option must be between 1 and 5: ");
    }
    else
    {
        switch(option)
        {
            case 1:
                printf("You have chosen a burger\n");
                break;
            case 2:
                printf("You have chosen fries\n");
                break;
            case 3:
                printf("You have chosen ice cream\n");
                break;
            case 4:
                printf("You have chosen fruit\n");
                break;
            case 5:
                printf("You have chosen cake");
                break;
        }
    }

    return 0;
}
