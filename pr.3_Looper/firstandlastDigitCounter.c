#include <stdio.h>
int main()
{
    int first, last, num;
    printf("enter any number: ");
    scanf("%d", &num);

    last = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    first=num;
    printf("sum of first and last digit: %d", first + last);
}