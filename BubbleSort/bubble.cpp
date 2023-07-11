#include <stdio.h>
int main() {
    int arr[10], i, j, temp;
    printf("Enter any 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swapping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        } 
    }
    printf("Sorted Array:-\n ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}