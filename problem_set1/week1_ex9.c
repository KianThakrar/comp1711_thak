#include<stdio.h>
// finding how far light can travel in x number of days
int main(){

    int days;
    double distance;
    printf("Enter the number of days the light has travelled for: ");
    scanf("%d", &days);

    distance = 299792458. * 3600 * 24 * days;

    printf("Light has travelled %lfm in %d days", distance, days);

    return 0;

}