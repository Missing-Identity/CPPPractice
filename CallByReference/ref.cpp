#include <stdio.h>
#include <iostream>
#include <cmath>

void updation(int *a, int *b, int *c, int *d){ //Function definition/protoype
    *a = std::pow(*a, 4);
    *d = std::pow(*d, 4);
    *b = *b/2;
    *c = *c/2;
}

int main(){
    int a, b, c, d;
    printf("Enter the four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    updation(&a, &b, &c, &d); // Call by reference
    printf("The updated numbers are: %d %d %d %d", a, b, c, d);
 }