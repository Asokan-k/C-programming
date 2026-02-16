#include<stdio.h>
int main()
{
    int num, num1, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1 = num;
    while(num1 != 0)
    {
        digit = num1 % 10;
        rev = rev * 10 + digit;
        num1 = num1 / 10;
    }
    printf("Reverse = %d\n", rev);
    return 0;
}
