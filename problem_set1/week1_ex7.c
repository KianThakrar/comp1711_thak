#include<stdio.h>
// fareheiht to celcius conversion
int main(){

    float faren, celsius;
    printf("Enter the temperature in farenheight: ");
    scanf("%f", &faren);

    celsius = 5/9. * (faren - 32.);

    printf("The temperature in celcuis is %lf\n", &celsius);
    return 0;


}