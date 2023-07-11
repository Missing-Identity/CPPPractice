#include <stdio.h>
#include <iostream>
int main(){
    int n, i;
    float *gdp;
    printf("Enter the number of countries: ");
    scanf("%d", &n);
    gdp = (float *)malloc(n * sizeof(float));
    printf("Enter the GDP of the countries: ");
    for(i = 0; i < n; i++){
        scanf("%f", &gdp[i]);
    }
    printf("The GDP of the couhtries are: ");
    for(i = 0; i < n; i++){
        printf("%.2f ", gdp[i]);
    }
}