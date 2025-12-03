#include <stdio.h>

// »¼°j¤G¤¸·j´M¨ç¦¡
int binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)       
        return -1;

    int mid = (start + end) / 2;

    if (arr[mid] == key)     
        return mid;
    else if (key < arr[mid]) 
        return binarySearch(arr, start, mid - 1, key);
    else                     
        return binarySearch(arr, mid + 1, end, key);
}

int main(void)
{
    int data[] = { 2, 5, 7, 10, 13, 20, 28, 35, 42, 50 };
    int size = sizeof(data) / sizeof(data[0]);
    int key;

    printf("Enter search key: ");
    scanf_s("%d", &key);

    int result = binarySearch(data, 0, size - 1, key);

    if (result != -1)
        printf("Found %d at index %d\n", key, result);
    else
        printf("%d not found in array.\n", key);

    return 0;
}
