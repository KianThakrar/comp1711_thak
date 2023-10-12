#include<stdio.h>
#include <math.h>
//program to calculate the area of a circle with a given radius

int main(){

    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double circumference;
    circumference = 2 * M_PI * radius;

    printf("The cirumference of the circle is %lf\n", circumference);
    return 0;

}