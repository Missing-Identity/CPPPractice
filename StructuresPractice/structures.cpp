#include <stdio.h>
#include <iostream>

struct band
{
    char name[20];
    float bnd1, bnd2, bnd3;
};

float average(struct band *); //Call by Reference
float avg(struct band); //Call by Value

int main(){
    struct band bvar;
    printf("Enter the name of the band: ");
    scanf("%s", bvar.name);
    printf("Enter the three scores: ");
    scanf("%f %f %f", &bvar.bnd1, &bvar.bnd2, &bvar.bnd3);
    printf("The average of the three scores is(Using Call By Reference Program): %.2f", average(&bvar)); // Passing pointer of bvar
    printf("\nThe average of the three scores is(Using Call By Value Program): %.2f", avg(bvar)); // Passing bvar
}

float average(struct band *b)
{
    return (b->bnd1 + b->bnd2 + b->bnd3) / 3.0; // Arrow pointer for items in structure as we are using call by reference.
}

float avg(struct band b)
{
    return (b.bnd1 + b.bnd2 + b.bnd3) / 3.0; // Dot operator for items in structure as we are using call by value.
}
