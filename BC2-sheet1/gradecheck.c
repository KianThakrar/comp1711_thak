#include <stdio.h>
//program to see if mark is pass or fail

int main()
{
    int mark;
    printf("Input mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100)
    {
        if (mark >= 70)
        {
            printf("%d is a distinction\n", mark);
        }
        else if (mark >= 50)
        {
            printf("%d is a pass\n", mark);
        }
        else 
        {
            printf("%d is a fail\n", mark);

        }
    }

    return 0;
}
