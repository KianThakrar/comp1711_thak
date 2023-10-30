#include <stdio.h>

float sphere_volume(float radius)
{
    float volume;
    volume = (4.0/3.0) * 3.14 * radius * radius * radius;
    return volume;
}

int main()
{
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("%.2f", sphere_volume(radius));

    return 0;
}