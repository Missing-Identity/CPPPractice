#include <stdio.h>
int main()
{
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int c[3][3], i, j, k, sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum= sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        }
    }
    printf("The multiplication of two matrices is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
