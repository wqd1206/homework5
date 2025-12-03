#include <stdio.h>

int recursiveMaximum(int arr[], int size);

int main(void)
{
    int data[] = { 12, 5, 37, 29, 48, 7 };
    int size = sizeof(data) / sizeof(data[0]);

    printf("Maximum value = %d\n", recursiveMaximum(data, size));

    return 0;
}

int recursiveMaximum(int arr[], int size)
{

    if (size == 1)
        return arr[0];


    int maxRest = recursiveMaximum(arr + 1, size - 1);

    return (arr[0] > maxRest) ? arr[0] : maxRest;
}
