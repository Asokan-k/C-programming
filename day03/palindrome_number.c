#include <stdio.h>
int main()
{
    int num, num1, rev = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &num);
    num1 = num;   // copy original number
    while(num1 != 0)
    {
        digit = num1 % 10;
        rev = rev * 10 + digit;
        num1 = num1 / 10;
    }
    if(num == rev)
    {
        printf("Palindrome number\n");
    }
    else
    {
        printf("Not a palindrome number\n");
    }
    return 0;
}
