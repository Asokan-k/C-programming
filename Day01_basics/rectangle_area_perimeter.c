#include <stdio.h>

int main()
{
    int length, width;
    int area, perimeter;

    printf("Enter the length and width:\n");
    scanf("%d %d", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
