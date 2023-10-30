#include <stdio.h>

float circle_area(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    return area;
}

int main(){
    printf("%.2f",circle_area(7));
}

