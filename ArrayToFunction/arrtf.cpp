#include <stdio.h>
#include <iostream>

int evennos(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main(){
    int *arr, n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The number of even numbers are: %d", evennos(arr, n));
}