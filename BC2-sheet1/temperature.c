#include <stdio.h>

int main()
{
    int temperature;
    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    if (temperature <= 40 && temperature >= -10)
    {
        printf("%d is in the range", temperature);
    }
    else
    {
        printf("%d is not in the range", temperature);
    }
}