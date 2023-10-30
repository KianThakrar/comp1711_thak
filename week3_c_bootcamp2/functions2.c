#include <stdio.h>
//function that adds two number together
float sum(float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main()
{
    float y = 2;
    float z = sum(5.11, y); //calling the new function

    printf("The sum of 5 and %.2f is %.2f\n", y, z); //can use .2 etc to specify how many decimal places to use
}