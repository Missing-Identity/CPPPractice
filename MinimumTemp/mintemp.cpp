#include <stdio.h>
#include <iostream>
void minimumtemp(float *temp, int n){
    float min = temp[0];
    for(int i = 0; i < n; i++){
        if(temp[i] < min){
            min = temp[i];
        }
    }
    printf("The minimum temperature is: %.2f", min);
}

int main(){
    int n, i;
    float *temp;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    temp = (float *)malloc(n * sizeof(float));
    printf("Enter the temperature of the days: ");
    for(i = 0; i < n; i++){
        scanf("%f", &temp[i]);
    }
    minimumtemp(temp, n);
}