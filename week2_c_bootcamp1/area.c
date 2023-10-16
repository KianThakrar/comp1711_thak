#include<stdio.h>

int main(){
    float length;
    printf("Please Enter an length: ");
    scanf("%f", &length);
    float width;
    printf("Please enter a width :");
    scanf("%f", &width);
    float area;
    area = length * width;
    printf("Area = %f\n", area);
    return 0


}