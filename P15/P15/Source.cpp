#include <stdio.h>
#include <stdlib.h>

void swap(int* element1Ptr, int* element2Ptr);
void bubbleSort(int* const array, const int size);

int main(void)
{
    int array[10] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i;

    printf("Data items in original order\n");
    for (i = 0; i < 10; i++)
        printf("%d ", array[i]);

    bubbleSort(array, 10);

    printf("\nData items in ascending order\n");
    for (i = 0; i < 10; i++)
        printf("%d ", array[i]);

    printf("\n");
    system("pause");
    return 0;
}

void bubbleSort(int* const array, const int size)
{
    int pass;
    int j;

    for (pass = 0; pass < size - 1; pass++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int* element1Ptr, int* element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
