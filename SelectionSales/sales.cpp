#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size], i, j, temp;
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<(size-1); i++){
        for(j=i+1; j<size; j++){
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted sales: ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

}