#include <stdio.h>

int main()
{
    int a, b, c;
    int sum;
    float average;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    sum = a + b + c;
    average = (float)sum / 3;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
