#include <stdio.h>

int calculateSum(int n)
{
    if (n == 1) return 1;

    return n + calculateSum(n-1);
}

int main()
{
    int N;
    printf("Enter the positive integer N: ");
    scanf("%d", &N);

    printf("Sum of Natural N numbers is: %d\n", calculateSum(N));

    return 0;
}