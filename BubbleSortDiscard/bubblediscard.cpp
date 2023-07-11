#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int passes = 0;
    int sorted = 0;
    for (int pass = 0; pass < size - 1; pass++)
    {
        sorted = 1;
        for (int i = 0; i < size - pass - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = 0;
            }
        }

        if (sorted)
        {
            break;
        }
        passes++;
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of passes taken: %d\n", passes);

    return 0;
}
