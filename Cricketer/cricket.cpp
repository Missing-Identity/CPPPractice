#include <stdio.h>
#include <iostream>

void second(int a, int b, int c)
{
    if (a < b && a < c)
    {
        printf("\nThe lowest score is: %d", a);
    }
    else if (b < a && b < c)
    {
        printf("\nThe lowest score is: %d", b);
    }
    else
    {
        printf("\nThe lowest score is: %d", c);
    }
}

void first(int a, int b, int c){
    float avg;
    avg = (a + b + c) / 3.0;
    printf("The average of the three test scores is: %.2f", avg);
    second(a, b, c);
}

int main(){
    printf("Enter the three test scores: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    first(a, b, c);
}