#include <stdio.h>

int multiply(int num, int times)
{
    if (times < 1)
    {
        return 0;
    }

    return (num + multiply(num, times-1));

}

int main()
{
    int num1 , num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter the number you want to multiply with: ");
    scanf("%d", &num2);

    printf("\n%d", multiply(num1, num2));

    return 0;

}