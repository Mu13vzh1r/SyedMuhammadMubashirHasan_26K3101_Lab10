#include <stdio.h>


void findEven(int arr[], int size)
{
    if (size > 1) 
        findEven(arr, size-1);

    if (arr[size-1] % 2 == 0) printf("%d ", arr[size-1]);

}


int main()
{
    int numbers[10];

    printf("Enter 10 numbers.\n");
    for (int i = 0; i<10; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    findEven(numbers, 10);

    return 0;
}