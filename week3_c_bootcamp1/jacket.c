#include <stdio.h>

int main(){
    float temperature;
    printf("Whats the temperature today: ");
    scanf("%f", &temperature);

    float jacket_threshold = 15;

/*checks current temperature vs the threshold for 
for needing a jacket and print corresponding message*/

    if (temperature > 20)
        printf("No need for a jacket.\n");
    else if (temperature > 10)
        printf("Good weather for a light jacket.\n");
    else
        printf("Good weather for a jacket today.\n");

    return 0;
}

