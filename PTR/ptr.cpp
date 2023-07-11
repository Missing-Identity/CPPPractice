#include <stdio.h>
#include <iostream>
int interest(int *p, int *r, int *t){
    return (*p * *r * *t) / 100;
}

int main(){
    int p, r, t;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the time period: ");
    scanf("%d", &t);
    printf("The interest is: %d", interest(&p, &r, &t));
}