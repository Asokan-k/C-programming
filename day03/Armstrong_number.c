#include <stdio.h>
int main()
{
    int num, num1, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1 = num;
    while(num1 != 0)
    {
        digit = num1 % 10;
        sum = sum + (digit * digit * digit);
        num1 = num1 / 10;
    }
    if(sum == num)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
