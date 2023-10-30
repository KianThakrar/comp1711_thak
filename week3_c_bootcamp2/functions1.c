#include <stdio.h>
//function that adds two number together
int sum(int a, int b)
{
    int answer;
    answer = a + b;
    return answer;
}

int main()
{
    int y = 2;
    int z = sum(5, y); //calling the new function

    printf("The sum of 5 and %d is %d\n", y, z);
}